#ifndef GAME_H
#define GAME_H

#include "finalscore.h"
#include "dkgen.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include "score.h"
#include "time.h"
#include <QBrush>
#include <QImage>
#include "dialog.h"
#include "generator.h"
#include "QVector"
#include "target.h"
class Game :public QGraphicsView
{
public:
    Game();
    QGraphicsScene *scene;

    Dialog *dialog;

    Score *score;

    Time *time;

    FinalScore *finalscore;

    Generator *generator;

    Target *target;
//    DKGen *dkgen;

//    int t_score;

//    int k;

//    void inck();

//    void keyPressEvent(QKeyEvent *event);

};

#endif // GAME_H
