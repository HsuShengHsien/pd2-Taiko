#ifndef DKGEN_H
#define DKGEN_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class DKGen: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    DKGen(QGraphicsItem * parent=0);
    int random_number;
    void keyPressEvent(QKeyEvent *event);
public slots:
    void move();
    void spawn();

};

#endif // DKGEN_H
