#include "game.h"
#include <QTimer>
#include <QDebug>
#include <QKeyEvent>
#include "score.h"
#include "time.h"
#include "dialog.h"

extern Score *score_g;
extern Score *score_f;
extern Time *time;
extern Dialog *dialog;

Game::Game() {

    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,470);
    setBackgroundBrush(QBrush(QImage(":/pics/img/bg.png")));

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,470);


    score_g->setPos(500,30);
    scene->addItem(score_g);

    time->setPos(150,30);
    scene->addItem(time);

    dialog->scene->addItem(score_f);

    QTimer *timer = new QTimer();
    QTimer::singleShot(26000,timer,SLOT(stop()));


    QObject::connect(dialog->button2,SIGNAL(clicked()),this,SLOT(close()));
    QObject::connect(dialog->button1,SIGNAL(clicked()),this,SLOT(close()));


    generator = new Generator();
    scene->addItem(generator);
    QObject::connect(timer,SIGNAL(timeout()),generator,SLOT(spawn()));
    target = new Target();
    target->setPos(32,165);
    target->setFlag(QGraphicsItem::ItemIsFocusable);
    target->setFocus();
    scene->addItem(target);


    timer->start(1000);
}









