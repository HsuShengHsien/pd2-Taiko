#ifndef TIME_H
#define TIME_H

#include <QGraphicsTextItem>
#include <QObject>


class Time:public QGraphicsTextItem{

    Q_OBJECT

public:
    Time(QGraphicsItem *parent = 0);
    int time;

public slots:
    void decrease();

};

#endif // TIME_H
