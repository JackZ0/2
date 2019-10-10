#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    snake = new snakenode(this,100,100);
}

MainWindow::~MainWindow()
{
    delete ui;
}
