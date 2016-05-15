#include "target.h"
#include <QGraphicsScene>
#include <QList>
#include "dkgen.h"
#include <typeinfo>
#include <QTimer>

Target::Target(QGraphicsItem *parent): QGraphicsPixmapItem(parent){
    score=0;
    setPixmap(QPixmap(":/pics/img/target"));
    QTimer *timer = new QTimer(this);
    QTimer::singleShot(31000,timer,SLOT(stop()));
    QObject::connect(timer,SIGNAL(timeout()),this,SLOT(test()));
    timer->start(1);

}

void Target::test(){

   QList<QGraphicsItem *> colliding_items = collidingItems();

    for (int i = 0, n = colliding_items.size(); i < n; ++i){
        if (typeid(*(colliding_items[i])) == typeid(DKGen)){

            scene()->removeItem(colliding_items[i]);



            delete colliding_items[i];
        }
    }

}
//void Game::keyPressEvent(QKeyEvent *event){
//    if(event->key() == Qt::Key_D)){
//        if

//}
//  else if(event->key() == Qt::Key_K && dkgen->pos().x() == 50){
//       t_score++;
//    }
//}
