#include "mainwindow.h"
#include "ui_mainwindow.h"

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
void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setPen(QPen(Qt::black,4));//设置画笔形式
    //painter.drawLine(20,20,220,220);//画直线
   // painter.drawLine(20,220,220,20);
    painter.drawEllipse(20,20,220,220);//画圆
    painter.drawEllipse(110,45,40,40);//画圆
    painter.drawEllipse(110,165,40,40);//画圆
    painter.drawRect(20,20,220,220);//画矩形
    QRect rectangle(120,20,100,100);
    int startAngle = 30 * 20;
    int spanAngle = 120 * 20;

    QPainter painter1(this);
    painter1.drawPie(rectangle, startAngle, spanAngle);


}
