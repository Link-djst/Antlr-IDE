/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_File;
    QAction *actionSave_File;
    QAction *actionClose_File;
    QAction *actionExit;
    QAction *actionJavac;
    QAction *actionGUI;
    QAction *actionRun;
    QAction *actionClean;
    QAction *actionBuild_and_Show;
    QAction *actionSave_as;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuRun;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setTabShape(QTabWidget::Triangular);
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName(QStringLiteral("actionOpen_File"));
        actionSave_File = new QAction(MainWindow);
        actionSave_File->setObjectName(QStringLiteral("actionSave_File"));
        actionClose_File = new QAction(MainWindow);
        actionClose_File->setObjectName(QStringLiteral("actionClose_File"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionJavac = new QAction(MainWindow);
        actionJavac->setObjectName(QStringLiteral("actionJavac"));
        actionGUI = new QAction(MainWindow);
        actionGUI->setObjectName(QStringLiteral("actionGUI"));
        actionRun = new QAction(MainWindow);
        actionRun->setObjectName(QStringLiteral("actionRun"));
        actionClean = new QAction(MainWindow);
        actionClean->setObjectName(QStringLiteral("actionClean"));
        actionBuild_and_Show = new QAction(MainWindow);
        actionBuild_and_Show->setObjectName(QStringLiteral("actionBuild_and_Show"));
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 40, 781, 211));
        textEdit_2 = new QTextEdit(centralWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(10, 320, 781, 211));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 63, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 290, 101, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuRun = new QMenu(menuBar);
        menuRun->setObjectName(QStringLiteral("menuRun"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuRun->menuAction());
        menuFile->addAction(actionOpen_File);
        menuFile->addAction(actionSave_File);
        menuFile->addAction(actionSave_as);
        menuFile->addAction(actionClose_File);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuRun->addAction(actionRun);
        menuRun->addAction(actionJavac);
        menuRun->addSeparator();
        menuRun->addAction(actionGUI);
        menuRun->addSeparator();
        menuRun->addAction(actionClean);
        menuRun->addSeparator();
        menuRun->addAction(actionBuild_and_Show);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionOpen_File->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        actionOpen_File->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
        actionSave_File->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        actionSave_File->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
        actionClose_File->setText(QApplication::translate("MainWindow", "Close", Q_NULLPTR));
        actionClose_File->setShortcut(QApplication::translate("MainWindow", "Ctrl+W", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", Q_NULLPTR));
        actionJavac->setText(QApplication::translate("MainWindow", "Javac", Q_NULLPTR));
        actionJavac->setShortcut(QApplication::translate("MainWindow", "Ctrl+J", Q_NULLPTR));
        actionGUI->setText(QApplication::translate("MainWindow", "GUI", Q_NULLPTR));
        actionGUI->setShortcut(QApplication::translate("MainWindow", "Ctrl+G", Q_NULLPTR));
        actionRun->setText(QApplication::translate("MainWindow", "Antlr", Q_NULLPTR));
        actionRun->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", Q_NULLPTR));
        actionClean->setText(QApplication::translate("MainWindow", "Clean", Q_NULLPTR));
        actionClean->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", Q_NULLPTR));
        actionBuild_and_Show->setText(QApplication::translate("MainWindow", "Build and Show", Q_NULLPTR));
        actionSave_as->setText(QApplication::translate("MainWindow", "Save as.. ", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Grammar", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Test Grammar", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuRun->setTitle(QApplication::translate("MainWindow", "Build", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
