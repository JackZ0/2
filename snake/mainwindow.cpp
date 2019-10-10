#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include <QtTest/QTest>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Triggering(QAction *ac){
    if(ui->startaction == ac){
        sdialog = new snakedialog(this);
        int ms = 300;

        while(1){
            sdialog->move(dir,this);
          //  QTest::qWait(ms);
        }
    }
}

void MainWindow::keyPressEvent(QKeyEvent *event){
    return;
}
