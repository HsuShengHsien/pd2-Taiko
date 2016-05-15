#ifndef GAME_H
#define GAME_H


#include <QGraphicsScene>
#include <QGraphicsView>
#include <QBrush>
#include <QImage>
#include "generator.h"
#include "target.h"

class Game :public QGraphicsView
{
public:
    Game();
    QGraphicsScene *scene;

    Generator *generator;

    Target *target;

};

#endif // GAME_H
