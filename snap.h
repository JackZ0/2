#ifndef SNAP_H
#define SNAP_H

#include <QDialog>

namespace Ui {
class snap;
}

class snap : public QDialog
{
    Q_OBJECT

public:
    explicit snap(QWidget *parent = 0);
    ~snap();

private:
    Ui::snap *ui;
};

#endif // SNAP_H
