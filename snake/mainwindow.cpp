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
    switch(event->key()) {
    case 16777235:
        dir = 1;
        break;
    case 16777237:
        dir = 2;
        break;
    case 16777234:
        dir = 3;
        break;
    case 16777236:
        dir = 4;
        break;
    default:
        break;
    }
}
