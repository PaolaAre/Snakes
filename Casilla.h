#include <iostream>
#include <string>

#ifndef CASILLA_H
#define CASILLA_H

using namespace std;


class Casilla
{
protected:

    int number_;
    string tipo_;
    int avance_;
    
public:

    Casilla();
    Casilla(int);
    int getNumber();
    void setNumber(int);
    string getTipo();
    void setTipo(string);
    int getAvance();
    void setAvance(int);
};
#endif