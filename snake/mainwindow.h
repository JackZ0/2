#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "snakenode.h"
#include "snakedialog.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public:
    int dir;

    void keyPressEvent(QKeyEvent *event);
private slots:
    void Triggering(QAction *ac);



private:
    Ui::MainWindow *ui;
    snakenode *snake;
    snakedialog *sdialog;
};

#endif // MAINWINDOW_H
