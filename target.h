#ifndef TARGET_H
#define TARGET_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
#include <QList>

class Target:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Target(QGraphicsItem * parent=0);
    void keyPressEvent(QKeyEvent *event);

    QList<QGraphicsItem *> colliding_items = collidingItems();

public slots:
    void test();

};
#endif // TARGET_H
