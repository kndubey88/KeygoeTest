/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOptions;
    QAction *actionSettings;
    QAction *actionStart;
    QAction *actionPause;
    QAction *actionSaveLog;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_55;
    QLabel *label_50;
    QLabel *label_51;
    QLabel *label_52;
    QLabel *label_53;
    QLabel *label_54;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QTableView *callStateView;
    QTextBrowser *textBrowser;
    QVBoxLayout *verticalLayout;
    QListView *listView;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_40;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_41;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_42;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QHBoxLayout *horizontalLayout_10;
    QComboBox *comboBox_2;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QTextBrowser *textBrowser_2;
    QMenuBar *menuBar;
    QMenu *menuTools;
    QMenu *menuOperate;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(853, 675);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QStringLiteral("actionOptions"));
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        QIcon icon;
        icon.addFile(QStringLiteral("images/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettings->setIcon(icon);
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName(QStringLiteral("actionStart"));
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QStringLiteral("actionPause"));
        actionSaveLog = new QAction(MainWindow);
        actionSaveLog->setObjectName(QStringLiteral("actionSaveLog"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setLayoutDirection(Qt::LeftToRight);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_55 = new QLabel(centralWidget);
        label_55->setObjectName(QStringLiteral("label_55"));

        horizontalLayout_2->addWidget(label_55);

        label_50 = new QLabel(centralWidget);
        label_50->setObjectName(QStringLiteral("label_50"));

        horizontalLayout_2->addWidget(label_50);

        label_51 = new QLabel(centralWidget);
        label_51->setObjectName(QStringLiteral("label_51"));

        horizontalLayout_2->addWidget(label_51);

        label_52 = new QLabel(centralWidget);
        label_52->setObjectName(QStringLiteral("label_52"));

        horizontalLayout_2->addWidget(label_52);

        label_53 = new QLabel(centralWidget);
        label_53->setObjectName(QStringLiteral("label_53"));

        horizontalLayout_2->addWidget(label_53);

        label_54 = new QLabel(centralWidget);
        label_54->setObjectName(QStringLiteral("label_54"));

        horizontalLayout_2->addWidget(label_54);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        callStateView = new QTableView(centralWidget);
        callStateView->setObjectName(QStringLiteral("callStateView"));
        callStateView->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(callStateView->sizePolicy().hasHeightForWidth());
        callStateView->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        callStateView->setFont(font);
        callStateView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        callStateView->setAutoScroll(true);
        callStateView->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        callStateView->setSortingEnabled(true);
        callStateView->setWordWrap(true);

        verticalLayout_3->addWidget(callStateView);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout_3->addWidget(textBrowser);

        verticalLayout_3->setStretch(0, 3);
        verticalLayout_3->setStretch(1, 1);

        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout->addWidget(listView);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        label_1 = new QLabel(centralWidget);
        label_1->setObjectName(QStringLiteral("label_1"));

        horizontalLayout_3->addWidget(label_1);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_4->addWidget(label_8);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_40 = new QLabel(centralWidget);
        label_40->setObjectName(QStringLiteral("label_40"));

        horizontalLayout_5->addWidget(label_40);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);

        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_5->addWidget(label_9);

        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_5->addWidget(label_10);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_8->addWidget(label_18);

        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_8->addWidget(label_19);

        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_8->addWidget(label_20);

        label_21 = new QLabel(centralWidget);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_8->addWidget(label_21);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_6->addWidget(label_11);

        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_6->addWidget(label_12);

        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_6->addWidget(label_13);

        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_6->addWidget(label_14);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_41 = new QLabel(centralWidget);
        label_41->setObjectName(QStringLiteral("label_41"));

        horizontalLayout_7->addWidget(label_41);

        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_7->addWidget(label_15);

        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_7->addWidget(label_16);

        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_7->addWidget(label_17);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_42 = new QLabel(centralWidget);
        label_42->setObjectName(QStringLiteral("label_42"));

        horizontalLayout_9->addWidget(label_42);

        label_22 = new QLabel(centralWidget);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_9->addWidget(label_22);

        label_23 = new QLabel(centralWidget);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_9->addWidget(label_23);

        label_24 = new QLabel(centralWidget);
        label_24->setObjectName(QStringLiteral("label_24"));

        horizontalLayout_9->addWidget(label_24);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        comboBox_2 = new QComboBox(centralWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout_10->addWidget(comboBox_2);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_10->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_10);


        verticalLayout->addLayout(verticalLayout_2);

        textBrowser_2 = new QTextBrowser(centralWidget);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));

        verticalLayout->addWidget(textBrowser_2);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);

        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 853, 22));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuOperate = new QMenu(menuBar);
        menuOperate->setObjectName(QStringLiteral("menuOperate"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy2);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuOperate->menuAction());
        menuTools->addSeparator();
        menuTools->addAction(actionOptions);
        menuTools->addAction(actionSettings);
        menuTools->addSeparator();
        menuOperate->addAction(actionStart);
        menuOperate->addAction(actionPause);
        menuOperate->addAction(actionSaveLog);
        mainToolBar->addAction(actionSettings);
        mainToolBar->addAction(actionStart);
        mainToolBar->addAction(actionPause);
        mainToolBar->addAction(actionSaveLog);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionOptions->setText(QApplication::translate("MainWindow", "Options", Q_NULLPTR));
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", Q_NULLPTR));
        actionStart->setText(QApplication::translate("MainWindow", "Start", Q_NULLPTR));
        actionPause->setText(QApplication::translate("MainWindow", "Pause", Q_NULLPTR));
        actionSaveLog->setText(QApplication::translate("MainWindow", "Save Log", Q_NULLPTR));
        label_55->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_50->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_51->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_52->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_53->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_54->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_1->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_40->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_41->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_42->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", Q_NULLPTR));
        menuOperate->setTitle(QApplication::translate("MainWindow", "Operate", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
