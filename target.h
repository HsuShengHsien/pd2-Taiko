#ifndef TARGET_H
#define TARGET_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>

class Target:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Target(QGraphicsItem * parent=0);
//    void keyPressEvent(QKeyEvent *event);
    int score;
public slots:
    void test();

};
#endif // TARGET_H
