#include "fileinfo.h"
#include "ui_fileinfo.h"

fileinfo::fileinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fileinfo)
{
    ui->setupUi(this);
    QObject::connect(ui->openpushButton,SIGNAL(clicked()),this,SLOT(getFileInfoSlot()));
    QObject::connect(ui->exitpushButton,SIGNAL(clicked()),this,SLOT(close()));

}

fileinfo::~fileinfo()
{
    delete ui;
}
void fileinfo::getFileInfoSlot(){
    QString filename = QFileDialog::getOpenFileName(this,"open file",QDir::homePath());
    if(filename.isEmpty())
    {
        QMessageBox::information(this,"Error Message","Please Select a File");
        return;
    }
    qDebug() <<filename;
    QFileInfo info(filename);
    ui->filesizelineEdit->setText(QString::number(info.size()));

    QDateTime create = info.created();
    ui->createtimelineEdit->setText(create.toString("yyyy-MM-dd hh:mm:ss"));

    QDateTime lastRead = info.lastRead();
    ui->LastAccesslineEdit->setText(lastRead.toString("yyyy-MM-dd hh:mm:ss"));

    if(info.isDir()){
        ui->isDirlineEdit->setText("是");
    }else{
        ui->isDirlineEdit->setText("不是");
    }
}
