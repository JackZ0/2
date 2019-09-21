#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->movie = new QMovie("img/Tomjerry.gif");
    qDebug() << "current movie has " <<this->movie->frameCount();
    ui->movielabel->setMovie(this->movie);
    this->movie->start();
    QObject::connect(ui->comeonButton,SIGNAL(clicked()),this,SLOT(startMovieSlot()));
    QObject::connect(ui->noButton,SIGNAL(clicked()),this,SLOT(stopMovieSlot()));
}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::startMovieSlot(){
    this->movie->start();
}

void Dialog::stopMovieSlot(){
    this->movie->stop();
}
