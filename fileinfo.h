#ifndef FILEINFO_H
#define FILEINFO_H

#include <QDialog>
#include <QFileInfo>
#include <QFile>
#include <QDir>
#include <QFileDialog>
#include <QMessageBox>
#include <QDateTime>
#include <QDebug>
namespace Ui {
class fileinfo;
}

class fileinfo : public QDialog
{
    Q_OBJECT

public:
    explicit fileinfo(QWidget *parent = 0);
    ~fileinfo();

private:
    Ui::fileinfo *ui;

private slots:
    void getFileInfoSlot();
  //  void getCreateTimeSlot();

};

#endif // FILEINFO_H
