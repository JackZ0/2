#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDialog>
#include <QFileDialog>
#include <QFile>
#include <QFontDialog>
#include <QColor>
#include <QColorDialog>
#include <QWidget>
#include <QDateTime>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QString saveFilename;
private slots:
    void newFileSlot();
    void openFileSlot();
    void saveFileSlot();
    void saveasFileSlot();
    void printFileSlot();
    void setfontSlot();
    void setcolorSlot();
    void currentDateTimeSlot();
};

#endif // MAINWINDOW_H
