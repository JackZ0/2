#ifndef SNAKEDIALOG_H
#define SNAKEDIALOG_H

#include <QWidget>
#include "snakenode.h"

class snakedialog : public QWidget
{
    Q_OBJECT
public:
    explicit snakedialog(QWidget *parent = 0);
    ~snakedialog();
public:
    void InsertHead(QWidget *parent);
    void DeleteTail();
    void eat(int dir,QWidget *parent);
    void move(int dir,QWidget *parent);
    snakenode *shead;
private:

signals:

public slots:
};

#endif // SNAKEDIALOG_H
