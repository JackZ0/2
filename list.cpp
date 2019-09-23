#include "list.h"
#include "ui_list.h"

list::list(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::list)
{
    ui->setupUi(this);
    QObject::connect(ui->addpushbutton,SIGNAL(clicked()),this,SLOT(addcompanyItemSlot()));
    QObject::connect(ui->companylineEdit,SIGNAL(returnPressed()),this,SLOT(addcompanyItemSlot()));
    QObject::connect(ui->deletepushButton,SIGNAL(clicked()),this,SLOT(deltetecompanyItemSlot()));
    QObject::connect(ui->deleteAllpushButton,SIGNAL(clicked()),this,SLOT(deleteAllcomapanyItemSlot()));
}

list::~list()
{
    delete ui;
}
void list::addcompanyItemSlot(){
    //创建item
    QString comanyname = ui->companylineEdit->text();
    QListWidgetItem *item = new QListWidgetItem();
    item->setText(comanyname);

    ui->listWidget->addItem(item);
    ui->companylineEdit->clear();
}
void list::deltetecompanyItemSlot(){
   QListWidgetItem *item = ui->listWidget->takeItem(ui->listWidget->currentRow());
   delete item;
}

void list::deleteAllcomapanyItemSlot()
{

    int counter = 0;
    while(1)
    {
        QListWidgetItem *Item = ui->listWidget->takeItem(counter);
        if(Item != NULL)
        {
            delete Item;
        }
        else{
            break;
        }
    }
}
