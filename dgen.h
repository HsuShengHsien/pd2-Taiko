#ifndef DGEN_H
#define DGEN_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class DGen: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    DGen(QGraphicsItem * parent=0);
    int random_number;

public slots:
    void move();


};

#endif // DGEN_H
