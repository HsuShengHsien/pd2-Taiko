#include "generator.h"
#include <QGraphicsScene>

Generator::Generator(QGraphicsItem *parent): QGraphicsPixmapItem(parent){

    setPixmap(QPixmap(":/pics/img/player"));
}

void Generator::spawn(){
    // create an enemy
    DKGen *dkgen = new DKGen();
    scene()->addItem(dkgen);
}
