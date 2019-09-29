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
void MainWindow::loadFromFileSlot(){
    if(this->memory->isAttached())
        this->memory->detach();
    QString fileName = QFileDialog::getOpenFileName(this,"Open Image",QString(),tr("Image(*.png,*.jpg,*.bmp)"));
    // 文件名加载到图片对象中
    QImage image ;
    if(!image.load(fileName)){
        QMessageBox::information(this,"Error Message","Image load error");
        return;
    }

    QBuffer buffer;
    bool ok = buffer.open(QIODevice::ReadWrite);
    if(ok){
        QDataStream in(&buffer);
        in << image;
    }else{
        QMessageBox::information(this,"Error Message","write buffer error");
    }

}
void MainWindow::loadFromMemorySlot(){

}
