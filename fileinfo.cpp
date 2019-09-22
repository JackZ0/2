#include "fileinfo.h"
#include "ui_fileinfo.h"

fileinfo::fileinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fileinfo)
{
    ui->setupUi(this);
}

fileinfo::~fileinfo()
{
    delete ui;
}
fileinfo::getFileInfoSlot(){
    QString filename = QFileDialog::getOpenFileName(this,"open file",QDir::homePath());
    if(filename.isEmpty())
    {
        QMessageBox::information(this,"Error Message","Please Select a File");
        return;
    }

    QFileInfo info(filename);
    ui->filesizelineEdit->setText(QString::number(info.size()));

    QDateTime create = info.created();
    ui->createtimelineEdit->setText(create.toString("YYYY-MM-dd hh:mm:ss"));

    QDateTime lastRead = info.lastRead();
    ui->LastAccesslineEdit->setText(lastRead.toString("YYYY-MM-dd hh:mm:ss"));

    if(info.isDir()){
        ui->isDirlineEdit->setText("是");
    }else{
        ui->isDirlineEdit->setText("不是");
    }

}
