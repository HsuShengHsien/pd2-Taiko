#ifndef SPAWN_H
#define SPAWN_H

#include "dkgen.h"
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class Generator:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Generator(QGraphicsItem * parent=0);

public slots:
    void spawn();

};

#endif // SPAWN_H
