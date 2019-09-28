#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString command;
    int second = 3600*ui->timeLineEdit->text().toInt();
    command = command + " " + QString::number(second);
    system(command.toLatin1().data());
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(close()));
    timer->start(5*1000); // 以毫秒为单位
}

MainWindow::~MainWindow()
{
    delete ui;
}
