#ifndef SNAKENODE_H
#define SNAKENODE_H

#include <QWidget>
#include <QFrame>
#include <QPainter>
#include <QPoint>
#include <QColor>
#include <QPainter>
#include <QtCore>


class snakenode : public QWidget
{
    Q_OBJECT
public:
    explicit snakenode(QWidget *parent = 0);
    snakenode(QWidget *parent , QPoint pos);
    snakenode(QWidget *parent ,int x, int y);
    ~snakenode();
    void setPos(int x, int y);
    void setPos(QPoint pos);

    QPoint getPos(void);
public:
    snakenode * next;
private:
    QPoint spos;
    QFrame *item;

private:
    void snakenode_Init(QWidget *parent);

signals:

public slots:
};

#endif // SNAKENODE_H
