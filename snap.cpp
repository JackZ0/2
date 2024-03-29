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

void snap::on_pushButton_clicked()
{
    if(ui->checkBox->isChecked()){
        this->hide();  //隐藏
        this->timer = new QTimer;
        QObject::connect(this->timer,SIGNAL(timeout()),this,SLOT(shotScreenSlot()));
        this->timer->start(ui->spinBox->value()*1000);
      //  this->show();
       // this->timer->stop();
    }
    else{
        qApp->beep();
    }
}
void snap::shotScreenSlot()
{
    //QPixmap QPixmap::grabWindow(WId window, int x = 0, int y = 0, int width = -1, int height = -1)
    this->pixmap = QPixmap::grabWindow(QApplication::desktop()->winId());
    ui->screenlabel->setPixmap(this->pixmap.scaled(ui->screenlabel->size()));

    QClipboard *clipboard = QApplication::clipboard();
    QString originalText = clipboard->text();
    qDebug() << "current clipboard" << originalText;
    clipboard->setPixmap(this->pixmap);
    this->show();
    this->timer->stop();
}

void snap::contextMenuEvent(QContextMenuEvent *event){
    QMenu *menu = new QMenu(this);
    QAction *action = new QAction(this);
    QAction *processAction = new QAction(this);
    QObject::connect(processAction,SIGNAL(triggered()),this,SLOT(startNotepadSlot()));
    QObject::connect(action,SIGNAL(triggered()),this,SLOT(on_savepicpushButton_clicked()));
    action->setText("Save As");
    processAction->setText("start notepad");
    menu->addAction(action);
    menu->addSeparator();
    menu->addAction(processAction);
    menu->exec(QCursor::pos());
}

void snap::on_savepicpushButton_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this,"open file", QStandardPaths::writableLocation(QStandardPaths::GenericDataLocation) +
            "/data/organization/application");
    this->pixmap.save(fileName);
}

void snap::startNotepadSlot(){
    QProcess *process = new QProcess;
    process->start("notepad.exe");
}
