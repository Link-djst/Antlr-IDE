#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>
#include <QFileInfo>
#include <QTextStream>
#include <QMessageBox>
#include <QProcess>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
}

MainWindow::~MainWindow(){
    delete ui;
}


void MainWindow::on_actionOpen_File_triggered(){
    filePath = QFileDialog::getOpenFileName(this, tr("Open Grammar"),
                                                    "/home/stdj/Projects/compilers/hw1", tr("Grammar Files (*.g4 *.txt)"));
    if(!filePath.isEmpty()){
        QFile file(filePath);
        if(!file.open(QIODevice::ReadOnly)){
            QMessageBox::information(this, "info", file.errorString());
        } else {
            QTextStream stream(&file);
            ui->textEdit->setText(stream.readAll());
            QFileInfo fileInfo(file.fileName());
            fileName = fileInfo.fileName();
            name = fileName;
            name.remove(".g4");
            //qInfo() << name;
        }
    }
}

void MainWindow::on_actionSave_File_triggered()
{
    if(!fileName.isEmpty()){
        QFile file(filePath);
        if(!file.open(QIODevice::WriteOnly)){
            QMessageBox::information(this, "info", file.errorString());
        } else {
            QTextStream stream(&file);
            stream << ui->textEdit->toPlainText();
            QMessageBox::information(this, "info", "The grammar file has been saved.");
        }
    } else {
        QMessageBox::information(this, "info", "There is no grammar open to be saved.");
    }
}


void MainWindow::on_actionRun_triggered(){
    QProcess *process = new QProcess(this);
    QString processCommand = "cd ~/Projects/compilers/hw1/; " + ANTLR4 + " "+ fileName +" ;";
    if(!fileName.isEmpty()){
        process->start("/bin/bash", QStringList() << "-c" << QString(processCommand));
        QMessageBox::information(this, "info", "ANTLR4 done!");
    } else {
        QMessageBox::information(this, "info", "There is no grammar open.");
    }
}

void MainWindow::on_actionJavac_triggered(){
    QProcess *process = new QProcess(this);
    QString processCommand = "cd ~/Projects/compilers/hw1/;" + JAVAC + name + "*.java ;";
    if(!fileName.isEmpty()){
        process->start("/bin/bash", QStringList() << "-c" << QString(processCommand));
        QMessageBox::information(this, "info", "Javac done!");
    } else {
        QMessageBox::information(this, "info", "There is no grammar open.");
    }
}

void MainWindow::on_actionClose_File_triggered(){
    fileName.clear();
    name.clear();
    ui->textEdit->clear();
}

void MainWindow::on_actionExit_triggered(){
    QApplication::quit();
}

void MainWindow::on_actionGUI_triggered(){
    QProcess *process = new QProcess(this);
    QString processCommand = "cd ~/Projects/compilers/hw1/; echo " + ui->textEdit_2->toPlainText() + " | " + GRUN + " " + name+ " r -gui;";
    if(!fileName.isEmpty() || ui->textEdit_2->toPlainText().isEmpty()){
        process->start("/bin/bash", QStringList() << "-c" << QString(processCommand));
        QMessageBox::information(this, "info", "GUI done!");
    } else {
        QMessageBox::information(this, "info", "There is no grammar open.");
    }
}

void MainWindow::on_actionClean_triggered(){
    QProcess *process = new QProcess(this);
    QString processCommand = "cd ~/Projects/compilers/hw1/; rm " + name+ "*.{java,tokens,class};";
    if(!fileName.isEmpty()){
        process->start("/bin/bash", QStringList() << "-c" << QString(processCommand));
        QMessageBox::information(this, "info", "Clean done!");
    } else {
        QMessageBox::information(this, "info", "There is no grammar open.");
    }
}

void MainWindow::on_actionBuild_and_Show_triggered(){
    QProcess *process = new QProcess(this);
    QString processCommand1 = ANTLR4 + " "+ fileName +" ; ";
    QString processCommand2 = JAVAC + name + "*.java ; ";
    QString processCommand3 = "echo " + ui->textEdit_2->toPlainText() + " | " + GRUN + " " + name+ " r -gui;";
    QString processCommand = "cd ~/Projects/compilers/hw1/; rm " + name+ "*.{java,tokens,class};" + processCommand1 + processCommand2 + processCommand3;
    if(!fileName.isEmpty() || ui->textEdit_2->toPlainText().isEmpty()){
        process->start("/bin/bash", QStringList() << "-c" << QString(processCommand));
        QMessageBox::information(this, "info", "Build and Show done!");
    } else {
        QMessageBox::information(this, "info", "There is no grammar open.");
    }
}
