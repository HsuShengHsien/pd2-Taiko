#ifndef TIME_H
#define TIME_H

#include <QGraphicsTextItem>
#include <QObject>


class Time:public QGraphicsTextItem{

    Q_OBJECT

public:
    Time(QGraphicsItem *parent = 0);
    int getTime();

public slots:
    void decrease();

private:
    int time;

};

#endif // TIME_H
