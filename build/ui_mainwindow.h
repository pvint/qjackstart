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
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QProgressBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
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
    QToolButton *recButton;
    QLabel *recFileLabel;
    QLabel *recDiskLabel;
    QProgressBar *recDiskProgress;
    QLineEdit *recFileEdit;
    QToolButton *toolButton;
    QTabWidget *tabOptions;
    QWidget *tabPause;
    QGridLayout *gridLayout;
    QDoubleSpinBox *pauseDelaySpin;
    QLabel *pauseSplitLabel;
    QCheckBox *pauseSplitCheck;
    QLabel *pauseLevelLabel;
    QDoubleSpinBox *pauseLevelSpin;
    QJRMeter *vuMeter;
    QLabel *pauseDelayLabel;
    QLabel *dbLabel;
    QWidget *tabPost;
    QFormLayout *formLayout_2;
    QLabel *postActionLabel;
    QComboBox *postActionCombo;
    QLabel *postCmdLabel;
    QLineEdit *postCmdEdit;
    QLabel *postLastLabel;
    QLineEdit *postLastEdit;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(268, 269);
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
        tabRecord->setFrameShape(QFrame::Panel);
        tabRecord->setFrameShadow(QFrame::Raised);
        tabRecord->setLineWidth(2);
        gridLayout_2 = new QGridLayout(tabRecord);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        recButton = new QToolButton(tabRecord);
        recButton->setObjectName(QString::fromUtf8("recButton"));
        recButton->setMinimumSize(QSize(60, 60));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/qjackstart/record-green.png"), QSize(), QIcon::Normal, QIcon::Off);
        recButton->setIcon(icon1);
        recButton->setIconSize(QSize(48, 48));
        recButton->setCheckable(true);
        recButton->setAutoRaise(true);

        gridLayout_2->addWidget(recButton, 0, 0, 2, 1);

        recFileLabel = new QLabel(tabRecord);
        recFileLabel->setObjectName(QString::fromUtf8("recFileLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(recFileLabel->sizePolicy().hasHeightForWidth());
        recFileLabel->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(recFileLabel, 0, 1, 1, 1);

        recDiskLabel = new QLabel(tabRecord);
        recDiskLabel->setObjectName(QString::fromUtf8("recDiskLabel"));
        sizePolicy3.setHeightForWidth(recDiskLabel->sizePolicy().hasHeightForWidth());
        recDiskLabel->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(recDiskLabel, 1, 1, 1, 1);

        recDiskProgress = new QProgressBar(tabRecord);
        recDiskProgress->setObjectName(QString::fromUtf8("recDiskProgress"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(recDiskProgress->sizePolicy().hasHeightForWidth());
        recDiskProgress->setSizePolicy(sizePolicy4);
        recDiskProgress->setMaximumSize(QSize(16777215, 10));
        recDiskProgress->setValue(0);

        gridLayout_2->addWidget(recDiskProgress, 1, 2, 1, 1);

        recFileEdit = new QLineEdit(tabRecord);
        recFileEdit->setObjectName(QString::fromUtf8("recFileEdit"));
        recFileEdit->setEnabled(true);
        sizePolicy4.setHeightForWidth(recFileEdit->sizePolicy().hasHeightForWidth());
        recFileEdit->setSizePolicy(sizePolicy4);
        recFileEdit->setReadOnly(true);

        gridLayout_2->addWidget(recFileEdit, 0, 2, 1, 1);

        toolButton = new QToolButton(tabRecord);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setCheckable(true);

        gridLayout_2->addWidget(toolButton, 2, 0, 1, 1);


        gridLayout_3->addWidget(tabRecord, 0, 0, 1, 1);

        tabOptions = new QTabWidget(centralWidget);
        tabOptions->setObjectName(QString::fromUtf8("tabOptions"));
        sizePolicy2.setHeightForWidth(tabOptions->sizePolicy().hasHeightForWidth());
        tabOptions->setSizePolicy(sizePolicy2);
        tabOptions->setAutoFillBackground(false);
        tabPause = new QWidget();
        tabPause->setObjectName(QString::fromUtf8("tabPause"));
        gridLayout = new QGridLayout(tabPause);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pauseDelaySpin = new QDoubleSpinBox(tabPause);
        pauseDelaySpin->setObjectName(QString::fromUtf8("pauseDelaySpin"));
        sizePolicy4.setHeightForWidth(pauseDelaySpin->sizePolicy().hasHeightForWidth());
        pauseDelaySpin->setSizePolicy(sizePolicy4);
        pauseDelaySpin->setDecimals(0);
        pauseDelaySpin->setMinimum(1);
        pauseDelaySpin->setMaximum(5);
        pauseDelaySpin->setValue(2);

        gridLayout->addWidget(pauseDelaySpin, 1, 1, 1, 1);

        pauseSplitLabel = new QLabel(tabPause);
        pauseSplitLabel->setObjectName(QString::fromUtf8("pauseSplitLabel"));

        gridLayout->addWidget(pauseSplitLabel, 3, 0, 1, 1);

        pauseSplitCheck = new QCheckBox(tabPause);
        pauseSplitCheck->setObjectName(QString::fromUtf8("pauseSplitCheck"));
        sizePolicy4.setHeightForWidth(pauseSplitCheck->sizePolicy().hasHeightForWidth());
        pauseSplitCheck->setSizePolicy(sizePolicy4);
        pauseSplitCheck->setTristate(false);

        gridLayout->addWidget(pauseSplitCheck, 3, 1, 1, 1);

        pauseLevelLabel = new QLabel(tabPause);
        pauseLevelLabel->setObjectName(QString::fromUtf8("pauseLevelLabel"));

        gridLayout->addWidget(pauseLevelLabel, 0, 0, 1, 1);

        pauseLevelSpin = new QDoubleSpinBox(tabPause);
        pauseLevelSpin->setObjectName(QString::fromUtf8("pauseLevelSpin"));
        sizePolicy4.setHeightForWidth(pauseLevelSpin->sizePolicy().hasHeightForWidth());
        pauseLevelSpin->setSizePolicy(sizePolicy4);
        pauseLevelSpin->setDecimals(0);
        pauseLevelSpin->setMinimum(-40);
        pauseLevelSpin->setMaximum(3);
        pauseLevelSpin->setValue(-20);

        gridLayout->addWidget(pauseLevelSpin, 0, 1, 1, 1);

        vuMeter = new QJRMeter(tabPause);
        vuMeter->setObjectName(QString::fromUtf8("vuMeter"));
        sizePolicy1.setHeightForWidth(vuMeter->sizePolicy().hasHeightForWidth());
        vuMeter->setSizePolicy(sizePolicy1);
        vuMeter->setMinimumSize(QSize(20, 0));

        gridLayout->addWidget(vuMeter, 0, 2, 4, 1);

        pauseDelayLabel = new QLabel(tabPause);
        pauseDelayLabel->setObjectName(QString::fromUtf8("pauseDelayLabel"));

        gridLayout->addWidget(pauseDelayLabel, 1, 0, 1, 1);

        dbLabel = new QLabel(tabPause);
        dbLabel->setObjectName(QString::fromUtf8("dbLabel"));
        dbLabel->setMinimumSize(QSize(50, 0));
        dbLabel->setMaximumSize(QSize(50, 16777215));
        dbLabel->setLayoutDirection(Qt::RightToLeft);
        dbLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(dbLabel, 4, 2, 1, 1);

        tabOptions->addTab(tabPause, QString());
        tabPost = new QWidget();
        tabPost->setObjectName(QString::fromUtf8("tabPost"));
        formLayout_2 = new QFormLayout(tabPost);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        postActionLabel = new QLabel(tabPost);
        postActionLabel->setObjectName(QString::fromUtf8("postActionLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, postActionLabel);

        postActionCombo = new QComboBox(tabPost);
        postActionCombo->setObjectName(QString::fromUtf8("postActionCombo"));
        sizePolicy4.setHeightForWidth(postActionCombo->sizePolicy().hasHeightForWidth());
        postActionCombo->setSizePolicy(sizePolicy4);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, postActionCombo);

        postCmdLabel = new QLabel(tabPost);
        postCmdLabel->setObjectName(QString::fromUtf8("postCmdLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, postCmdLabel);

        postCmdEdit = new QLineEdit(tabPost);
        postCmdEdit->setObjectName(QString::fromUtf8("postCmdEdit"));
        postCmdEdit->setEnabled(true);
        sizePolicy4.setHeightForWidth(postCmdEdit->sizePolicy().hasHeightForWidth());
        postCmdEdit->setSizePolicy(sizePolicy4);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, postCmdEdit);

        postLastLabel = new QLabel(tabPost);
        postLastLabel->setObjectName(QString::fromUtf8("postLastLabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, postLastLabel);

        postLastEdit = new QLineEdit(tabPost);
        postLastEdit->setObjectName(QString::fromUtf8("postLastEdit"));
        postLastEdit->setEnabled(true);
        sizePolicy4.setHeightForWidth(postLastEdit->sizePolicy().hasHeightForWidth());
        postLastEdit->setSizePolicy(sizePolicy4);
        postLastEdit->setReadOnly(true);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, postLastEdit);

        tabOptions->addTab(tabPost, QString());

        gridLayout_3->addWidget(tabOptions, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(recButton, recFileEdit);
        QWidget::setTabOrder(recFileEdit, tabOptions);
        QWidget::setTabOrder(tabOptions, pauseLevelSpin);
        QWidget::setTabOrder(pauseLevelSpin, pauseDelaySpin);
        QWidget::setTabOrder(pauseDelaySpin, pauseSplitCheck);
        QWidget::setTabOrder(pauseSplitCheck, postActionCombo);
        QWidget::setTabOrder(postActionCombo, postCmdEdit);

        retranslateUi(MainWindow);

        tabOptions->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QJackStart", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        recButton->setText(QApplication::translate("MainWindow", "Record", 0, QApplication::UnicodeUTF8));
        recFileLabel->setText(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        recDiskLabel->setText(QApplication::translate("MainWindow", "Disk", 0, QApplication::UnicodeUTF8));
        recDiskProgress->setFormat(QApplication::translate("MainWindow", "%p%", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("MainWindow", "Monitor", 0, QApplication::UnicodeUTF8));
        pauseSplitLabel->setText(QApplication::translate("MainWindow", "Split file mode", 0, QApplication::UnicodeUTF8));
        pauseSplitCheck->setText(QString());
        pauseLevelLabel->setText(QApplication::translate("MainWindow", "Threshold (dB)", 0, QApplication::UnicodeUTF8));
        pauseDelayLabel->setText(QApplication::translate("MainWindow", "Activation delay (s)", 0, QApplication::UnicodeUTF8));
        dbLabel->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        tabOptions->setTabText(tabOptions->indexOf(tabPause), QApplication::translate("MainWindow", "Auto pause", 0, QApplication::UnicodeUTF8));
        postActionLabel->setText(QApplication::translate("MainWindow", "Action", 0, QApplication::UnicodeUTF8));
        postActionCombo->clear();
        postActionCombo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Custom", 0, QApplication::UnicodeUTF8)
        );
        postCmdLabel->setText(QApplication::translate("MainWindow", "Command", 0, QApplication::UnicodeUTF8));
        postLastLabel->setText(QApplication::translate("MainWindow", "Last file", 0, QApplication::UnicodeUTF8));
        tabOptions->setTabText(tabOptions->indexOf(tabPost), QApplication::translate("MainWindow", "Post processing", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
