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
* @file mainwindow.h
* $Author: orouits $
* $Date: 2011-12-30 18:04:45 -0500 (Fri, 30 Dec 2011) $
* $Revision: 61 $
* @brief Header for MainWindow class
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QTimer>
#include <QIcon>
#include <QtGui/QMainWindow>
#include "recorder.h"

namespace Ui
{
    class MainWindow;
}

/**
* @class MainWindow
* @brief Encapsulation of all the GUI of the application.
*/
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(Recorder *recorder, QWidget *parent = 0);
    ~MainWindow();
    void closeEvent(QCloseEvent *event);
    void readSettings();
    void writeSettings();

private:
    Ui::MainWindow *ui;
    Recorder *recorder;
    QIcon *iconGreen;
    QIcon *iconRed;
    QIcon *iconOrange;


private slots:
    void on_pauseLevelSpin_valueChanged(double );
    void on_monitorButton_clicked();

    void onRecorderStatusChanged();
};

#endif // MAINWINDOW_H
