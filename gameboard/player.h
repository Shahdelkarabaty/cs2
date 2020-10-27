#ifndef PLAYER_H
#define PLAYER_H

#include <QMainWindow>

class player : public QMainWindow
{
    Q_OBJECT

public:
    player(QWidget *parent = nullptr);
    ~player();
};
#endif // PLAYER_H
