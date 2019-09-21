#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->movie = new QMovie("img/Tomjerry.gif");
    ui->movielabel->setMovie(this->movie);
    this->movie->start();
}

Dialog::~Dialog()
{
    delete ui;
}
