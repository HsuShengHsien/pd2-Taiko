#include "game.h"
#include <QTimer>

#include <QDebug>
#include <QKeyEvent>

Game::Game() {
//    t_score=0;

    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,470);
    setBackgroundBrush(QBrush(QImage(":/pics/img/bg.png")));

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,470);

    score = new Score();
    score->setPos(500,30);
    scene->addItem(score);


    finalscore = new FinalScore();
    finalscore->setfinalscore(score->score);


    time = new Time();
    time->setPos(150,30);
    scene->addItem(time);


    dialog = new Dialog();
    dialog->scene->addItem(finalscore);

    QTimer *timer = new QTimer(this);
    QTimer::singleShot(31000,timer,SLOT(stop()));
    QTimer::singleShot(30000,dialog,SLOT(show()));
    QObject::connect(timer,SIGNAL(timeout()),time,SLOT(decrease()));
    QObject::connect(dialog->button2,SIGNAL(clicked()),this,SLOT(close()));

    generator = new Generator();
    scene->addItem(generator);

    DKGen *dkgen = new DKGen();
    scene->addItem(dkgen);

    QObject::connect(timer,SIGNAL(timeout()),generator,SLOT(spawn()));
    timer->start(1000);

    target = new Target();
    target->setPos(30,160);
    scene->addItem(target);
    QObject::connect(timer,SIGNAL(timeout()),target,SLOT(test()));
    show();
}





//void Game::keyPressEvent(QKeyEvent *event){
//    if(event->key() == Qt::Key_D && dkgen->pos().x() == 50 && (dkgen->random_number == 0 || dkgen->random_number == 2)){
//       t_score++;
//    }
//    else if(event->key() == Qt::Key_K && dkgen->pos().x() == 50){
//       t_score++;
//    }
//}
