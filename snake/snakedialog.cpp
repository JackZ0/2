#include "snakedialog.h"

snakedialog::snakedialog(QWidget *parent) : QWidget(parent)
{
    shead = new snakenode(parent,100,100);
}
snakedialog::~snakedialog(){
    delete shead;
}
void snakedialog::InsertHead(QWidget *parent){
    snakenode *node = new snakenode(parent);
    node->next = shead->next;
    shead->next = node;

    node->setPos(shead->getPos());
}
void snakedialog::DeleteTail(){
    snakenode *first,*mid,*last;
    mid = shead;
    last = shead->next;
    while(last != NULL){
        first = mid;
        mid = last;

        last = last->next;
    }

    first->next = NULL;
    delete mid;
}
void snakedialog::eat(int dir,QWidget *parent){
    int x,y;
    QPoint pos = shead->getPos();
    x = pos.x();
    y = pos.y();

    switch (dir) {
    case 1:
        y -= 10;
        break;
    case 2:
        y += 10;
        break;
    case 3:
        x -= 10;
        break;
    case 4:
        x += 10;
        break;
    default:
        break;
    }
    shead->setPos(x,y);
    DeleteTail();
}
