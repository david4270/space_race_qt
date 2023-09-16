#ifndef GAME_H
#define GAME_H


#include <QGraphicsView>
#include <QTimer>
#include <QDebug>
#include <QKeyEvent>

#include <QGraphicsTextItem>
#include <QFont>

#include "player.h"
#include "score.h"
#include "health.h"
#include "bullet.h"

enum states{
    StartScreen, // starting screen
    SettingScreen, // setting
    GameStandBy, // starting screen, but show # of players
    GameScreen // playing game
};

class Game: public QGraphicsView{
private:
    int numPlayers = 0;

public:
    enum states screenState = StartScreen;
    Game(QWidget * parent = 0);
    int getNumPlayers();
    void gameHelper();

    void keyPressEvent(QKeyEvent * event);

    QGraphicsTextItem * startText;
    QGraphicsTextItem * helperText;

    QGraphicsScene * scene;
    Player ** players;
    Score ** scores;
    Health ** healths;

};

#endif // GAME_H