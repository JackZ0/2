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

void snap::on_newSlotpushButton_clicked()
{
    if(ui->checkBox->isChecked()){
        this->hide();  //隐藏
        this->timer = new QTimer;
        QObject::connect(this->timer,SIGNAL(timeout()),SLOT(shotScreenSlot()));
        this->timer->start(ui->spinBox->value()*1000);
        this->show();
        this->timer->stop();
    }
    else{
        qApp->beep();
    }
}
void snap::shotScreenSlot()
{
//QPixmap QPixmap::grabWindow(WId window, int x = 0, int y = 0, int width = -1, int height = -1)

    this->pixmap = QPixmap::grabWindow(QApplication::desktop()->winId());
    ui->screenlabel->setPixmap(this->pixmap->scaled(ui->screenlabel->size()));

}
