#include <iostream>
#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

class Player
{
private:
    int position_;
    int number_;

public:
    Player();
    Player(int);
    int getPosition();
    int getNumber();
    void setPosition(int);
};
#endif