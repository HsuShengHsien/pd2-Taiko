#include "target.h"
#include <QGraphicsScene>
#include "dgen.h"
#include "kgen.h"
#include <typeinfo>
#include <QTimer>
#include <QKeyEvent>
#include <QDebug>
#include "score.h"

extern Score *score_g;
extern Score *score_f;

Target::Target(QGraphicsItem *parent): QGraphicsPixmapItem(parent){

    setPixmap(QPixmap(":/pics/img/target"));
    QTimer *timer = new QTimer(this);
    QTimer::singleShot(31000,timer,SLOT(stop()));
    QObject::connect(timer,SIGNAL(timeout()),this,SLOT(test()));
    timer->start(1);


}

void Target::test(){

  colliding_items = collidingItems();

}

void Target::keyPressEvent(QKeyEvent *event){
    if(event->key() == Qt::Key_D){

        qDebug()<<"d";
        for (int i = 0, n = colliding_items.size(); i < n; ++i){
            if (typeid(*(colliding_items[i])) == typeid(DGen)){

                   scene()->removeItem(colliding_items[i]);
                   delete colliding_items[i];
                   score_g->increase();
                   score_f->increase();
            }
        }

    }
   else if(event->key() == Qt::Key_K){

        qDebug()<<"k";
        for (int i = 0, n = colliding_items.size(); i < n; ++i){
            if (typeid(*(colliding_items[i])) == typeid(KGen)){
               scene()->removeItem(colliding_items[i]);
               delete colliding_items[i];
               score_g->increase();
               score_f->increase();
            }
        }

  }
}
