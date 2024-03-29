#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMovie>
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;
    QMovie *movie;
private slots:
    void startMovieSlot();
    void stopMovieSlot();
};

#endif // DIALOG_H
