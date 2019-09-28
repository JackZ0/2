#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    system("shutdown -s -t 7200");
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(close()));
    timer->start(5*1000); // 以毫秒为单位
}

MainWindow::~MainWindow()
{
    delete ui;
}
