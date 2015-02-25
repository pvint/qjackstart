/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>
#include "qjrmeter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QFrame *tabRecord;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_4;
    QJRMeter *vuMeter;
    QLabel *pauseLevelLabel;
    QDoubleSpinBox *thresholdLevelSpin;
    QToolButton *monitorButton;
    QLabel *bpmLabel;
    QLabel *leadinBarsLabel;
    QSpinBox *leadinBeatsSpinBox;
    QLabel *dbLabel;
    QLabel *beatLabel;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(375, 168);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/qjackstart/qjackstart.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tabRecord = new QFrame(centralWidget);
        tabRecord->setObjectName(QString::fromUtf8("tabRecord"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tabRecord->sizePolicy().hasHeightForWidth());
        tabRecord->setSizePolicy(sizePolicy2);
        tabRecord->setAutoFillBackground(false);
        tabRecord->setFrameShape(QFrame::Panel);
        tabRecord->setFrameShadow(QFrame::Raised);
        tabRecord->setLineWidth(2);
        gridLayout_2 = new QGridLayout(tabRecord);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        vuMeter = new QJRMeter(tabRecord);
        vuMeter->setObjectName(QString::fromUtf8("vuMeter"));
        sizePolicy1.setHeightForWidth(vuMeter->sizePolicy().hasHeightForWidth());
        vuMeter->setSizePolicy(sizePolicy1);
        vuMeter->setMinimumSize(QSize(20, 0));

        gridLayout_4->addWidget(vuMeter, 1, 4, 3, 1);

        pauseLevelLabel = new QLabel(tabRecord);
        pauseLevelLabel->setObjectName(QString::fromUtf8("pauseLevelLabel"));

        gridLayout_4->addWidget(pauseLevelLabel, 1, 0, 1, 1);

        thresholdLevelSpin = new QDoubleSpinBox(tabRecord);
        thresholdLevelSpin->setObjectName(QString::fromUtf8("thresholdLevelSpin"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(thresholdLevelSpin->sizePolicy().hasHeightForWidth());
        thresholdLevelSpin->setSizePolicy(sizePolicy3);
        thresholdLevelSpin->setMaximumSize(QSize(100, 16777215));
        thresholdLevelSpin->setDecimals(0);
        thresholdLevelSpin->setMinimum(-40);
        thresholdLevelSpin->setMaximum(3);
        thresholdLevelSpin->setValue(-20);

        gridLayout_4->addWidget(thresholdLevelSpin, 1, 1, 1, 1);

        monitorButton = new QToolButton(tabRecord);
        monitorButton->setObjectName(QString::fromUtf8("monitorButton"));
        monitorButton->setCheckable(true);

        gridLayout_4->addWidget(monitorButton, 3, 0, 1, 1);

        bpmLabel = new QLabel(tabRecord);
        bpmLabel->setObjectName(QString::fromUtf8("bpmLabel"));

        gridLayout_4->addWidget(bpmLabel, 3, 1, 1, 1);

        leadinBarsLabel = new QLabel(tabRecord);
        leadinBarsLabel->setObjectName(QString::fromUtf8("leadinBarsLabel"));

        gridLayout_4->addWidget(leadinBarsLabel, 2, 0, 1, 1);

        leadinBeatsSpinBox = new QSpinBox(tabRecord);
        leadinBeatsSpinBox->setObjectName(QString::fromUtf8("leadinBeatsSpinBox"));
        leadinBeatsSpinBox->setValue(4);

        gridLayout_4->addWidget(leadinBeatsSpinBox, 2, 1, 1, 1);

        dbLabel = new QLabel(tabRecord);
        dbLabel->setObjectName(QString::fromUtf8("dbLabel"));
        dbLabel->setMinimumSize(QSize(80, 0));

        gridLayout_4->addWidget(dbLabel, 1, 3, 3, 1);

        beatLabel = new QLabel(tabRecord);
        beatLabel->setObjectName(QString::fromUtf8("beatLabel"));

        gridLayout_4->addWidget(beatLabel, 3, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout_4, 2, 0, 1, 1);


        gridLayout_3->addWidget(tabRecord, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QJackStart", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        pauseLevelLabel->setText(QApplication::translate("MainWindow", "Threshold (dB)", 0, QApplication::UnicodeUTF8));
        monitorButton->setText(QApplication::translate("MainWindow", "Monitor", 0, QApplication::UnicodeUTF8));
        bpmLabel->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        leadinBarsLabel->setText(QApplication::translate("MainWindow", "Lead-in (Beats)", 0, QApplication::UnicodeUTF8));
        dbLabel->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        beatLabel->setText(QApplication::translate("MainWindow", "--", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
