#include <iostream>
#include <string>
#include "Casilla.h"

#ifndef LADDER_H
#define LADDER_H

using namespace std;


class Ladder: public Casilla 
{
    
public:

    Ladder();
    Ladder(int, int);
};
#endif