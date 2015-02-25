/***************************************************************************
 Copyright (C) 2011 - Olivier ROUITS <olivier.rouits@free.fr>

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the
 Free Software Foundation, Inc.,
 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 ***************************************************************************/
/**
* @file mainwindow.cpp
* $Author: orouits $
* $Date: 2012-01-21 09:48:47 -0500 (Sat, 21 Jan 2012) $
* $Revision: 77 $
* @brief Implementation of MainWindow class
*/

#include <stdio.h>
#include "mainwindow.h"
#include "ui_mainwindow.h"

//=============================================================================
// Constructor / destructor
//=============================================================================
MainWindow::MainWindow(Recorder *recorder, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    // the recorder given by the application.
    this->recorder = recorder;

    //iconGreen = new QIcon(":/qjackstart/record-green.png");
    //iconRed = new QIcon(":/qjackstart/record-red.png");
    //iconOrange= new QIcon(":/qjackstart/record-orange.png");

    ui->setupUi(this);

    ui->vuMeter->setColorBack(palette().window().color());


    readSettings();

    ui->thresholdLevelSpin->setValue(recorder->getPauseLevel());

    ui->vuMeter->setCompLevel(recorder->getPauseLevel());
    ui->statusBar->showMessage(tr("Ready"));

    ui->bpmLabel->setText(QString::number(recorder->getBPM()));

    // Note: this works... use for flashing this->setStyleSheet("background-color:black;");
    connect(recorder, SIGNAL(statusChanged()), this, SLOT(onRecorderStatusChanged()));

    timer = new QTimer(this);
    beat = 1;

    // setup signal and slot
    connect(timer, SIGNAL(timeout()), this, SLOT(updateBeat()));

    timer->setSingleShot(true);
    //timer->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}


//=============================================================================
// Events methods
//=============================================================================

void MainWindow::on_monitorButton_clicked()
{    

    recorder->setMonitoring(!recorder->isMonitoring());

}



void MainWindow::on_pauseLevelSpin_valueChanged(double level)
{
    recorder->setPauseLevel(level);
    ui->vuMeter->setCompLevel(level);
}

// the slot for leadin beats
void MainWindow::updateBeat()
{
    // restart timer if not done
    if (beat <= ui->leadinBeatsSpinBox->value())
    {
        ui->beatLabel->setText(QString::number(beat));
        beat++;
        timer->start(1000);
    }
    else
    {
        // this is the starting beat - start the transport
        ui->statusBar->showMessage(tr("Starting..."));
        recorder->startTransport();

        // reset the monitor button
        ui->monitorButton->setChecked(false);
    }
}

// the timer slot show recorder state regularly
void MainWindow::onRecorderStatusChanged()
{
    ui->bpmLabel->setText(QString::number(recorder->getBPM()));
    if (recorder->isShutdown()) {
        close();
    }
    else {
        ui->vuMeter->setLeftLevel(recorder->getLeftLevel());
        ui->vuMeter->setRightLevel(recorder->getRightLevel());
        ui->dbLabel->setText(QString::number(floor(recorder->getCompLevel())) + " dB");

        if (recorder->isMonitoring()) {
            ui->statusBar->showMessage(tr("Waiting for sound..."));

            // check for sound
            if (recorder->getCompLevel() > ui->thresholdLevelSpin->value())
            {
                ui->statusBar->showMessage(tr("Lead in"));
                recorder->leadinBeats = ui->leadinBeatsSpinBox->value();
                //recorder->startTransportTimer();
                // get the beat time in ms
                int t = recorder->getBPM();

                // what to do if it's zero??
                if (t == 0)
                    t = 100;    // defaulting to 100 for now...

                t = t * 60 / 1000;
                timer->start(t);
                recorder->setMonitoring(false);
            }

        }
        else {
            ui->statusBar->showMessage(tr("Ready"));


        }
    }
}



void MainWindow::closeEvent(QCloseEvent *event)
{
    // TODO - save defaults writeSettings();
    event->accept();
}

//=============================================================================
// Settings methods
//=============================================================================

void MainWindow::writeSettings()
{
    QSettings settings("qjackstart", "qjackstart");

    settings.beginGroup("Recorder");
    settings.setValue("pauseLevel", recorder->getPauseLevel());
    settings.setValue("pauseActivationDelay", recorder->getPauseActivationDelay());
    settings.setValue("splitMode", recorder->isSplitMode());
    settings.setValue("processCmdLine", recorder->getProcessCmdLine());
    settings.setValue("connections1", recorder->getJackConnections1());
    settings.setValue("connections2", recorder->getJackConnections2());
    settings.endGroup();
}

void MainWindow::readSettings()
{
    QSettings settings("qjackstart", "qjackstart");

    settings.beginGroup("Recorder");
    recorder->setPauseLevel(settings.value("pauseLevel", -20).toFloat());
    recorder->setPauseActivationDelay(settings.value("pauseActivationDelay", 3).toInt());
    recorder->setSplitMode(settings.value("splitMode", false).toBool());
    recorder->setProcessCmdLine(settings.value("processCmdLine", "").toString());
    recorder->setJackConnections1(settings.value("connections1", "").toString());
    recorder->setJackConnections2(settings.value("connections2", "").toString());
    settings.endGroup();
}
