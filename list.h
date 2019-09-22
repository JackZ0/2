#ifndef LIST_H
#define LIST_H

#include <QDialog>
#include <QListWidgetItem>

namespace Ui {
class list;
}

class list : public QDialog
{
    Q_OBJECT

public:
    explicit list(QWidget *parent = 0);
    ~list();

private:
    Ui::list *ui;
private slots:
    void addcompanyItemSlot();
    void deltetecompanyItemSlot();
    void deleteAllcomapanyItemSlot();
};

#endif // LIST_H
