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
