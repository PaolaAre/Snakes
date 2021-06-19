#include "Casilla.h"
#include <iostream>
#include <string>

using namespace std;

Casilla::Casilla(){
    number_ = 0;
    tipo_ = "N";
    avance_ = 0;
}

Casilla::Casilla(int number) {
    number_ = number;
    tipo_ = "N";
    avance_ = 0;
}

int Casilla::getNumber(){
    return number_;
}

void Casilla::setNumber(int number){
    number_ = number;
}

string Casilla::getTipo() {
    return tipo_;
}

void Casilla::setTipo(string tipo) {
    tipo_ = tipo;
}

int Casilla::getAvance() {
    return avance_;
}

void Casilla::setAvance(int avance) {
    avance_ = avance;
}