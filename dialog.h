#ifndef DIALOG_H
#define DIALOG_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QPushButton>


class Dialog:public QGraphicsView{
public:
    Dialog();
    QGraphicsScene *scene;
    QPushButton *button1;
    QPushButton *button2;

};


#endif // DIALOG_H
