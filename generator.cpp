#include "generator.h"
#include <QGraphicsScene>
#include <QTime>
#include "dgen.h"
#include "kgen.h"

Generator::Generator(QGraphicsItem *parent): QGraphicsPixmapItem(parent){
    setPixmap(QPixmap(":/pics/img/player"));
}

void Generator::spawn(){
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());

    random_number = qrand() % 2;

    if(random_number==0){
        DGen *dgen = new DGen();
        scene()->addItem(dgen);

    }
    else if(random_number==1){
        KGen *kgen = new KGen();
        scene()->addItem(kgen);

    }

}
