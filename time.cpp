#include "time.h"
#include <QFont>

Time::Time(QGraphicsItem *parent):QGraphicsTextItem(parent){

    time = 30;

    setPlainText(QString("Time: ") + QString::number(time));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",24));

}

void Time::decrease(){
    time--;
    setPlainText(QString("Time: ") + QString::number(time));
}

int Time::getTime(){
    return time;
}


