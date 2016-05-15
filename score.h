#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsTextItem>

class Score:public QGraphicsTextItem{


public:
    Score(QGraphicsItem *parent = 0);
    int score;
    void increase();

};

#endif // SCORE_H
