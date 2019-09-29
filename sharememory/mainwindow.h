#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSharedMemory>
#include <QPixmap>
#include <QFileDialog>
#include <QBuffer>
#include <QDataStream>
#include <QMessageBox>


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
    QSharedMemory *memory;

private slots:
    void loadFromFileSlot();
    void loadFromMemorySlot();
};

#endif // MAINWINDOW_H
