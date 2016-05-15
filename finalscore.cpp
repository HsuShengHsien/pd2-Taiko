#include "finalscore.h"
#include <QFont>

FinalScore::FinalScore(QGraphicsItem *parent): QGraphicsTextItem(parent){

    finalscore = 100 ;

    setPlainText(QString("Score: ") + QString::number(finalscore));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",24));
}

void FinalScore::setfinalscore(int score)
{
    finalscore = score;
    setPlainText(QString("Score: ") + QString::number(finalscore));
}



