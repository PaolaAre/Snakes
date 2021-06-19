#include "Snake.h"
#include <iostream>
#include <string>

using namespace std;

Snake::Snake(){
    number_ = 0;
    tipo_ = "S";
    avance_ = -3;
}

Snake::Snake(int number, int avance) {
    number_ = number;
    tipo_ = "S";
    avance_ = avance;
}

