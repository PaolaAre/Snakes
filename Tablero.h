#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>
#include "Casilla.h"
#include "Ladder.h"
#include "Snake.h"
#ifndef TABLERO_H
#define TABLERO_H

using namespace std;

class Tablero
{
public:
    vector<Casilla> casillas_;
    Tablero();
    Tablero(int, int, int, int, int);
    void printTablero();
};
#endif
