#include "time.h"
#include <QFont>
#include <QTimer>

Time::Time(QGraphicsItem *parent):QGraphicsTextItem(parent){

    time = 30;

    QTimer *timer = new QTimer(this);
    QObject::connect(timer,SIGNAL(timeout()),this,SLOT(decrease()));
    timer->start(1000);
    QTimer::singleShot(31000,timer,SLOT(stop()));

    setPlainText(QString("Time: ") + QString::number(time));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",24));

}


void Time::decrease(){
    time--;
    setPlainText(QString("Time: ") + QString::number(time));
}




