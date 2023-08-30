#ifndef GAME_H
#define GAME_H


#include <QGraphicsView>
#include <QTimer>
#include <QDebug>
#include <QKeyEvent>

#include "player.h"
#include "score.h"
#include "health.h"
#include "bullet.h"


class Game: public QGraphicsView{
private:
    int numPlayers = 0;

public:
    Game(QWidget * parent = 0);
    int getNumPlayers();

    void keyPressEvent(QKeyEvent * event);

    QGraphicsScene * scene;
    Player ** players;
    Score ** scores;
    Health ** healths;
public slots:
    void gameHelper();
};

#endif // GAME_H
