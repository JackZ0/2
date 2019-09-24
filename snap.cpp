#include "snap.h"
#include "ui_snap.h"

snap::snap(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::snap)
{
    ui->setupUi(this);
}

snap::~snap()
{
    delete ui;
}
