#include "snakenode.h"

snakenode::snakenode(QWidget *parent) : QWidget(parent)
{

}
snakenode::snakenode(QWidget *parent ,int x, int y){
    snakenode_Init(parent);
    setPos(x,y);
}
snakenode::snakenode(QWidget *parent , QPoint pos){
    snakenode_Init(parent);
    setPos(pos);
}
void snakenode::snakenode_Init(QWidget *parent){
    item = new QFrame(parent);
    item->setAutoFillBackground(true);
    QPalette pa = item->palette();
    QColor red(Qt::red);
    pa.setColor(QPalette::Background,red);
    item->setPalette(pa);
    item->resize(10,10);

    item->show();

    next = NULL;
}
void snakenode::setPos(int x, int y){
    spos.setX(x);
    spos.setY(y);
    item->move(spos);
}
void snakenode::setPos(QPoint pos){
    spos = pos;
    item->move(spos);
}

QPoint snakenode::getPos(void){
    return spos;
}

snakenode::~snakenode()
{
    delete item;
}
