#include <iostream>
#include <string>
#include "Casilla.h"

#ifndef SNAKE_H
#define SNAKE_H

using namespace std;


class Snake: public Casilla 
{

public:

    Snake();
    Snake(int, int);
};
#endif