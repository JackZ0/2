#ifndef FILEINFO_H
#define FILEINFO_H

#include <QDialog>

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
};

#endif // FILEINFO_H
