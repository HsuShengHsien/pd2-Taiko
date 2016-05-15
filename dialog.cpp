#include "dialog.h"


Dialog::Dialog(){
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,500,300);
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(500,300);

    button1 = new QPushButton("&Restart", this);
    button1->setGeometry(100,200,80,50);
    QObject::connect(button1,SIGNAL(clicked()),this,SLOT(close()));

    button2 = new QPushButton("&Exit", this);
    button2->setGeometry(325,200,80,50);
    QObject::connect(button2,SIGNAL(clicked()),this,SLOT(close()));


}


