#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionOpen_File_triggered();

    void on_actionSave_File_triggered();

    void on_actionRun_triggered();

    void on_actionJavac_triggered();

    void on_actionClose_File_triggered();

    void on_actionExit_triggered();

    void on_actionGUI_triggered();

    void on_actionClean_triggered();

    void on_actionBuild_and_Show_triggered();

private:
    Ui::MainWindow *ui;
    QString  filePath;
    QString fileName;
    QString name;
    const QString ANTLR = ".:antlr-4.5.3-complete.jar";
    const QString ANTLR4 = " java -Xmx500M -cp " + ANTLR + " org.antlr.v4.Tool ";
    const QString GRUN = " java -cp "+ ANTLR + " org.antlr.v4.gui.TestRig ";
    const QString JAVAC = "javac -cp "+ANTLR+" ";
};

#endif // MAINWINDOW_H
