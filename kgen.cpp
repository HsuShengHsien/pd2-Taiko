#include "kgen.h"
#include <QTimer>
#include <QGraphicsScene>
//#include <QTime>
#include <QDebug>

KGen::KGen(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){

//    QTime time = QTime::currentTime();
//    qsrand((uint)time.msec());

    random_number = qrand() % 2;

    if(random_number == 0){
        setPixmap(QPixmap(":/pics/img/note_k"));
        setPos(740,150);

    }
    else if(random_number == 1){
        setPixmap(QPixmap(":/pics/img/note_bk"));
        setPos(720,140);

    }

    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(5);

}

void KGen::move()
{
    setPos(x()-1,y());

    if(pos().x()+60 < 0){
        scene()->removeItem(this);
        delete this;

    }

}
