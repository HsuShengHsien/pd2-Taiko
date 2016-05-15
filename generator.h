#ifndef GENERATOR_H
#define GENERATOR_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class Generator:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Generator(QGraphicsItem * parent=0);
    int random_number;

public slots:
    void spawn();

};

#endif // GENERATOR_H
