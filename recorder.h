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
* @file recorder.h
* $Author: orouits $
* $Date: 2012-01-17 17:57:44 -0500 (Tue, 17 Jan 2012) $
* $Revision: 70 $
* @brief Header for Recorder class
*/

#ifndef RECORDER_H
#define RECORDER_H

#include <jack/jack.h>
#include <jack/ringbuffer.h>
#include <sndfile.h>
#include <math.h>
#include <QString>
#include <QThread>
#include <QMutex>
#include <QWaitCondition>
#include <QQueue>
#include <QDir>
#include <QTimer>


/**
* @class Recorder
* @brief Encapsulation of all recording feature without GUI link.
* The recorder inherits from Thread to manage IO recording feature and non RT activities
*/
class Recorder: public QThread
{
    Q_OBJECT

    QString jackName;
    QQueue<jack_port_id_t> jackPortRegQueue;

    QTimer *timer;

    SNDFILE *sndFile;
    float *currentBuffer;
    float *alternateBuffer;

    QDir dirPath;
    int diskSpace;

    QString currentFilePath;
    QString processFilePath;
    QString processCmdLine;

    QMutex dataReadyMutex;
    QWaitCondition dataReady;

    jack_client_t *jackClient;
    jack_ringbuffer_t *jackRingBuffer;
    jack_port_t *jackInputPort1;
    jack_port_t *jackInputPort2;
    jack_port_t *jackOutputPort1;
    jack_port_t *jackOutputPort2;

    float pauseLevel;
    int pauseActivationMax;
    int pauseActivationDelay;
    int pauseActivationCount;
    bool splitMode;

    float leftLevel;
    float rightLevel;

    int overruns;
    int sampleRate;
    int bpm;

    bool recording;
    bool monitoring;
    bool shutdown;

    void computeDiskSpace();
    void computeFilePath();
    void computePauseActivationMax();

    void newFile();
    void closeFile();
    void processFile();

    void switchBuffer();
    void readCurrentBuffer();
    void computeCurrentBufferLevels();
    void writeAlternateBuffer();
    void fadeoutAlternateBuffer();
    void fadeinAlternateBuffer();

    void checkJackAutoConnect();
    QString getJackConnections(jack_port_t* jackPort);
    void setJackConnections(QString cnxLine, jack_port_t* jackPort);


protected:

    void run();
    bool isFile() { return sndFile != NULL; }
    bool isPauseLevel() { return leftLevel <= pauseLevel && rightLevel <= pauseLevel; }
    void setShutdown(bool value) { shutdown = value; }


public:

    Recorder(QString jackName);
    ~Recorder();

    int jackProcess(jack_nframes_t nframes);
    int jackSync(jack_transport_state_t state, jack_position_t *pos);
    void jackPortReg(jack_port_id_t port_id, int reg);
    void jackShutdown();
    void startTransport();
    void startTransportTimer();
    int getBPM();

    int leadinBeats;
    int leadinCount;


    QString getJackConnections1() {return getJackConnections(jackInputPort1);}
    QString getJackConnections2() {return getJackConnections(jackInputPort2);}
    void setJackConnections1(QString cnxLine) {setJackConnections(cnxLine, jackInputPort1);}
    void setJackConnections2(QString cnxLine) {setJackConnections(cnxLine, jackInputPort2);}

    QString getJackName() {return jackName; }
    bool isShutdown() { return shutdown; }
    void setRecording(bool value) { recording = value; }
    bool isRecording() { return recording; }
    void setMonitoring(bool value) {monitoring = value; }
    bool isMonitoring() { return monitoring; }
    bool isPaused() { return pauseActivationCount > pauseActivationMax; }
    void setPauseActivationDelay(int secs) {pauseActivationDelay = secs;}
    int getPauseActivationDelay() {return pauseActivationDelay;}
    void setSplitMode(bool split) { splitMode = split; }
    bool isSplitMode() { return splitMode; }
    QString getCurrentFilePath() { return currentFilePath; }
    QString getProcessFilePath() { return processFilePath; }
    void setProcessCmdLine(QString cmdLine) { processCmdLine = cmdLine; }
    QString getProcessCmdLine() { return processCmdLine; }
    int getDiskSpace() { return diskSpace; }
    int getOverruns() { return overruns; }
    void setPauseLevel(float level) { pauseLevel = level; }
    float getPauseLevel() { return pauseLevel; }
    float getLeftLevel() { return leftLevel; }
    float getRightLevel() { return rightLevel; }
    float getCompLevel() { return fmaxf(rightLevel, leftLevel); }

public slots:
    void updateTimer(int count);

signals:
    void statusChanged();
};

#endif // RECORDER_H
