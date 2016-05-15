#ifndef KGEN_H
#define KGEN_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class KGen: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    KGen(QGraphicsItem * parent=0);
    int random_number;

public slots:
    void move();


};
#endif // KGEN_H
