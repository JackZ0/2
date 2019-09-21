#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"

#include <QtCore>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("untitle notepad");
    QObject::connect(ui->newaction,SIGNAL(triggered()),this,SLOT(newFileSlot()));
    QObject::connect(ui->openaction,SIGNAL(triggered()),this,SLOT(openFileSlot()));
    QObject::connect(ui->saveaction,SIGNAL(triggered()),this,SLOT(saveFileSlot()));
    QObject::connect(ui->saveasaction,SIGNAL(triggered()),this,SLOT(saveasFileSlot()));
    QObject::connect(ui->printaction,SIGNAL(triggered()),this,SLOT(printFileSlot()));
    QObject::connect(ui->exitaction,SIGNAL(triggered()),this,SLOT(close()));
    QObject::connect(ui->fontaction,SIGNAL(triggered()),this,SLOT(setfontSlot()));
    QObject::connect(ui->copyaction,SIGNAL(triggered()),ui->textEdit,SLOT(copy()));
    QObject::connect(ui->cutaction,SIGNAL(triggered()),ui->textEdit,SLOT(cut()));
    QObject::connect(ui->pastaction,SIGNAL(triggered()),ui->textEdit,SLOT(paste()));
    QObject::connect(ui->undoaction,SIGNAL(triggered()),ui->textEdit,SLOT(undo()));
    QObject::connect(ui->SelectAllaction,SIGNAL(triggered(bool)),ui->textEdit,SLOT(selectAll()));
    QObject::connect(ui->coloraction,SIGNAL(triggered()),this,SLOT(setcolorSlot()));
    QObject::connect(ui->datetimeaction,SIGNAL(triggered()),this,SLOT(currentDateTimeSlot()));
    QObject::connect(ui->aboutaction,SIGNAL(triggered()),qApp,SLOT(aboutQt()));
    QObject::connect(ui->urlaction,SIGNAL(triggered()),this,SLOT(aboutwebUrlSlot()));
    QObject::connect(ui->aboutsoftwareaction,SIGNAL(triggered()),this,SLOT(aboutdialogSolt()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event){
    //event->ignore();
    // event->accept();
    if(ui->textEdit->document()->isModified()){
        QMessageBox msgBox;
        msgBox.setText("文件已经修改了.");
        msgBox.setInformativeText("是否保存修改文档？");
        msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Save);
        int ret = msgBox.exec();
        switch (ret) {
         case QMessageBox::Save:
            this->saveFileSlot();
             // Save was clicked

             break;
         case QMessageBox::Discard:
             event->accept();
             // Don't Save was clicked
             break;
         case QMessageBox::Cancel:
             // Cancel was clicked
            event->ignore();
             break;
         default:
             // should never be reached
             break;
        }
    }
    else{
         event->accept();
    }
}


void MainWindow::newFileSlot()
{
    if(ui->textEdit->document()->isModified())
    {
        qDebug() << "current file modified";
    }
    else
    {
        qDebug() << "not modified";
        ui->textEdit->clear();
        this->setWindowTitle("untitled.txt ...");
    }
}
void MainWindow::openFileSlot()
{
    QString filename = QFileDialog::getOpenFileName(this,"Open file",QDir::currentPath());
    qDebug() << filename;

    if(filename.isEmpty()){
        QMessageBox::information(this,"Error Message","please select a TextFile");
        return ;
    }
    QFile *file = new QFile;
    file->setFileName(filename);
    bool ok = file->open(QIODevice::ReadOnly);

    if(ok){
        QTextStream in(file);
        ui->textEdit->setText(in.readAll());
        file->close();
        delete file;
    }
    else{
        QMessageBox::information(this,"Error Message","File OpenErro"+file->errorString());
        return;
    }

}
void MainWindow::saveFileSlot(){
    if(saveFilename.isEmpty())
    {
        saveasFileSlot();
    }
    else{
        QString filename = QFileDialog::getSaveFileName(this,"savefile",QDir::currentPath());
        if(filename.isEmpty()){
            QMessageBox::information(this,"Error Message","please select a file");
            return ;
        }
        QFile *file = new QFile;
        file->setFileName(filename);
        bool ok = file->open(QIODevice::WriteOnly);
        if(ok)
        {
            QTextStream out(file);
            out << ui->textEdit->toPlainText();
            file->close();
            delete file;
        }
        else{
            QMessageBox::information(this,"Error Message","save file error");
            return ;
        }
    }
}

void MainWindow::printFileSlot(){

}

void MainWindow::saveasFileSlot(){
    saveFilename = QFileDialog::getSaveFileName(this,"savefile",QDir::currentPath());
    if(saveFilename.isEmpty()){
        QMessageBox::information(this,"Error Message","please select a file");
        return ;
    }
    QFile *file = new QFile;
    file->setFileName(saveFilename);
    bool ok = file->open(QIODevice::WriteOnly);
    if(ok)
    {
        QTextStream out(file);
        out << ui->textEdit->toPlainText();
        file->close();
        delete file;
    }
    else{
        QMessageBox::information(this,"Error Message","save file error");
        return ;
    }
}
void MainWindow::setfontSlot()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok,this);
      if (ok) {
          ui->textEdit->setFont(font);
          // the user clicked OK and font is set to the font the user selected
      } else {
          // the user canceled the dialog; font is set to the initial
          // value, in this case Helvetica [Cronyx], 10
          QMessageBox::information(this,"Error Message","font error");
          return;
      }
}

void MainWindow::setcolorSlot(){
    const QColor color = QColorDialog::getColor(Qt::green, this);

    if (color.isValid()) {
      ui->textEdit->setTextColor(color);
    }
    else{
        QMessageBox::information(this,"Error Message","color is unvalid");
        return ;
    }
}

void MainWindow::currentDateTimeSlot(){
    QDateTime datetime = QDateTime::currentDateTime();
    QString time = datetime.toString("yyyy-MM-dd hh:mm:ss");
    ui->textEdit->setText(time);
}

void  MainWindow::aboutwebUrlSlot(){
    QDesktopServices::openUrl(QUrl("https://github.com/JackZ0"));

}


void MainWindow::aboutdialogSolt(){
    Dialog *aboutdialog = new Dialog;
    aboutdialog->show();
}
