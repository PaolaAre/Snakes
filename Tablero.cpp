#include <iostream>
#include "Tablero.h"

using namespace std;

Tablero::Tablero() {
    srand(time(0));
    int ladders = 3;
    int snakes = 3;

    for (int i=0; i<30; i++) {
        casillas_.push_back(Casilla(i+1));
    }

    for (int i=0; i<ladders; i++) {
        int position = (rand() % 29);
        while (casillas_[position].getTipo() != "N") {
            position = (rand() % 29);
        }
        casillas_[position] = Ladder(position+1, 3);
    }

    for (int i=0; i<snakes; i++) {
        int position = (rand() % 29);
        while (casillas_[position].getTipo() != "N") {
            position = (rand() % 29);
        }
        casillas_[position] = Snake(position+1, -3);
    }
}


Tablero::Tablero(int casillas, int ladders, int snakes, int penalty, int reward) {
    srand(time(0));
    
    for (int i=0; i<casillas; i++) {
        casillas_.push_back(Casilla(i+1));
    }   

    for (int i=0; i<casillas_.size(); i++) {
        casillas_[i].setNumber(i+1);
    }

    for (int i=0; i<ladders; i++) {
        int position = (rand() % casillas-1);
        while (casillas_[position].getTipo() != "N") {
            position = (rand() % casillas-1);
        }
        casillas_[position] = Ladder(position+1, reward);
    }

    for (int i=0; i<snakes; i++) {
        int position = (rand() % casillas-1);
        while (casillas_[position].getTipo() != "N") {
            position = (rand() % casillas-1);
        }
        casillas_[position] = Snake(position+1, penalty);
    }
}

void Tablero::printTablero() {
    string output = "";
    for (int i=1; i<casillas_.size(); i++) {
        if (i % 5 != 0) {
            output = output + casillas_[i-1].getTipo();
        } else {
            output = output + casillas_[i-1].getTipo();
            cout << output << endl;
            output = "";
        }
        
    }
}