#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include "../TestWork/TestWork/TestWork.h"
#include "../TestWork/TestWork/MainWork1.h"
#include "../TestWork/TestWork/MainWork2.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButtonRun_clicked();

private:
    TestWork* T;
    MainWork1* M1;
    MainWork2* M2;
    Ui::MainWindow *ui;

    void calcTest();
    void calcMain1();
    void calcMain2();
};
#endif // MAINWINDOW_H
