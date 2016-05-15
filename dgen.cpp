#include "dgen.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QDebug>

DGen::DGen(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){

    random_number = qrand() % 2;

    if(random_number == 0){
        setPixmap(QPixmap(":/pics/img/note_d"));
        setPos(740,150);

    }
    else if(random_number == 1){
        setPixmap(QPixmap(":/pics/img/note_bd"));
        setPos(720,140);

    }

    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(5);

}

void DGen::move()
{
    setPos(x()-1,y());

    if(pos().x()+60 < 0){
        scene()->removeItem(this);
        delete this;

    }

}




