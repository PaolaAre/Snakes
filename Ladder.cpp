#include "Ladder.h"
#include <iostream>
#include <string>

using namespace std;

Ladder::Ladder(){
    number_ = 0;
    tipo_ = "L";
    avance_ = 3;
}

Ladder::Ladder(int number, int avance) {
    number_ = number;
    tipo_ = "L";
    avance_ = avance;
}