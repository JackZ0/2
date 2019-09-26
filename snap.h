#ifndef SNAP_H
#define SNAP_H

#include <QDialog>
#include <QTime>
#include <QPixmap>
#include <QTimer>
#include <QDesktopWidget>
#include <QMessageBox>
#include <QDesktopWidget>
#include <QDesktopServices>
#include <QClipboard>
#include <QFileDialog>
#include <QStandardPaths>
#include <QDebug>

namespace Ui {
class snap;
}

class snap : public QDialog
{
    Q_OBJECT

public:
    explicit snap(QWidget *parent = 0);
    ~snap();

private slots:
    void shotScreenSlot();
    void on_pushButton_clicked();
    void on_savepicpushButton_clicked();

private:
    Ui::snap *ui;
    QTimer *timer;
    QPixmap pixmap;
};

#endif // SNAP_H
