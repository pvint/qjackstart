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

    iconGreen = new QIcon(":/qjackstart/record-green.png");
    iconRed = new QIcon(":/qjackstart/record-red.png");
    iconOrange= new QIcon(":/qjackstart/record-orange.png");

    ui->setupUi(this);

    ui->vuMeter->setColorBack(palette().window().color());

    ui->postActionCombo->addItem("OGG","sox ${0} ${0%%wav}ogg");
    ui->postActionCombo->addItem("MP3","sox ${0} ${0%%wav}mp3");

    readSettings();

    ui->pauseLevelSpin->setValue(recorder->getPauseLevel());
    ui->pauseDelaySpin->setValue(recorder->getPauseActivationDelay());
    ui->pauseSplitCheck->setChecked(recorder->isSplitMode());
    ui->vuMeter->setCompLevel(recorder->getPauseLevel());
    ui->postCmdEdit->setText(recorder->getProcessCmdLine());
    ui->statusBar->showMessage(tr("Ready"));

    connect(recorder, SIGNAL(statusChanged()), this, SLOT(onRecorderStatusChanged()));
}

MainWindow::~MainWindow()
{
    delete iconGreen;
    delete iconRed;
    delete iconOrange;
    delete ui;
}


//=============================================================================
// Events methods
//=============================================================================

void MainWindow::on_recButton_clicked()
{    
    recorder->setRecording(!recorder->isRecording());
}

void MainWindow::on_pauseDelaySpin_valueChanged(double secs)
{
    recorder->setPauseActivationDelay(secs);
}

void MainWindow::on_pauseLevelSpin_valueChanged(double level)
{
    recorder->setPauseLevel(level);
    ui->vuMeter->setCompLevel(level);
}

// the timer slot show recorder state regularly
void MainWindow::onRecorderStatusChanged()
{
    if (recorder->isShutdown()) {
        close();
    }
    else {
        ui->vuMeter->setLeftLevel(recorder->getLeftLevel());
        ui->vuMeter->setRightLevel(recorder->getRightLevel());
        ui->dbLabel->setText(QString::number(floor(recorder->getRightLevel())) + " dB");
        ui->recDiskProgress->setValue(recorder->getDiskSpace());
        if (ui->recFileEdit->text() != recorder->getCurrentFilePath())
            ui->recFileEdit->setText(recorder->getCurrentFilePath());
        if (ui->postLastEdit->text() != recorder->getProcessFilePath())
            ui->postLastEdit->setText(recorder->getProcessFilePath());
        if (recorder->isRecording()) {
            if (recorder->isPaused()) {
                ui->recButton->setIcon(*iconOrange);
                ui->statusBar->showMessage(tr("Waiting for sound..."));
            }
            else {
                ui->recButton->setIcon(*iconRed);
                ui->statusBar->showMessage(tr("Recording..."));
            }
        }
        else {
            ui->recButton->setIcon(*iconGreen);
            ui->statusBar->showMessage(tr("Ready"));
        }
    }
}

void MainWindow::on_pauseSplitCheck_stateChanged(int value)
{
    recorder->setSplitMode(value != 0);
}

void MainWindow::on_postActionCombo_currentIndexChanged(int index)
{
    ui->postCmdEdit->setText(ui->postActionCombo->itemData(index).toString());
}

void MainWindow::on_postCmdEdit_textChanged(QString text)
{
    recorder->setProcessCmdLine(text);
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    writeSettings();
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