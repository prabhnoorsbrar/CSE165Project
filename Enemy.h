#ifndef ENEMY_H
#define ENEMY_H

#include<QGraphicsPixmapItem>
#include<QObject>
#include <QTimer>
#include <QGraphicsScene>

class Enemy: public QObject, public QGraphicsPixmapItem {
    Q_OBJECT
public:
    static int count;
    Enemy();
public slots:
    virtual void move();
    void shoot();
private:
    int health;
    int shootTimer;
};


#endif // ENEMY_H
