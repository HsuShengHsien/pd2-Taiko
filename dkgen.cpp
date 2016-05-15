#include "dkgen.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QTime>
#include <QKeyEvent>
#include <QDebug>

DKGen::DKGen(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent){

    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());

    random_number = qrand() % 4;

    if(random_number == 0){
        setPixmap(QPixmap(":/pics/img/note_d"));
        setPos(740,150);
    }
    else if(random_number == 1){
        setPixmap(QPixmap(":/pics/img/note_k"));
        setPos(740,150);
    }
    else if(random_number == 2){
        setPixmap(QPixmap(":/pics/img/note_bd"));
        setPos(720,140);
    }
    else if(random_number == 3){
        setPixmap(QPixmap(":/pics/img/note_bk"));
        setPos(720,140);
    }

    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(5);

}

void DKGen::move()
{
    setPos(x()-1,y());

    if(pos().x()+60 < 0){
        scene()->removeItem(this);
        delete this;

    }

}

void DKGen::spawn()
{
    DKGen *dkgen = new DKGen();
    this->setFlag(QGraphicsItem::ItemIsFocusable);
    this->setFocus();
    scene()->addItem(dkgen);

}

void DKGen::keyPressEvent(QKeyEvent *event){
    if(event->key() == Qt::Key_D && this->pos().x() == 50 && (this->random_number == 0 || this->random_number == 2)){
        scene()->removeItem(this);
        delete this;
        qDebug()<<"deteled";
    }
//    else if(event->key() == Qt::Key_K && dkgen->pos().x() == 50){
//       t_score++;
//    }
}
