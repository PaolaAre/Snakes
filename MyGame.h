#include <iostream>
#include <string>
#include <vector>

#include "Tablero.h"
#include "Dice.h"
#include "Player.h"

#ifndef MYGAME_H
#define MYGAME_H

using namespace std;

class MyGame
{
    private:
        int limit_ = 30;

    public:
        void start(int, int, int, int, int, int, int, string);
};
#endif
