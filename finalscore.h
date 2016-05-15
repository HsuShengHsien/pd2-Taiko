#ifndef FINALSCORE_H
#define FINALSCORE_H

#include <QGraphicsTextItem>

class FinalScore: public QGraphicsTextItem{
public:
    FinalScore(QGraphicsItem *parent = 0);
    int finalscore;
    void setfinalscore(int score);
};

#endif // FINALSCORE_H
