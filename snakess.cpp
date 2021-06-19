#include <iostream>
#include <string>
#include "MyGame.h"

using namespace std;

int main(){
    MyGame g;
    int tiles;
    int ladders;
    int snakes;
    int penalty;
    int reward;
    int players;
    int turns;
    string mode;
    cout << "Casillas:" << endl;
    cin >> tiles;
    cout << "Escaleras:" << endl;
    cin >> ladders;
    cout << "Serpientes:" << endl;
    cin >> snakes;
    cout << "Recompensa:" << endl;
    cin >> reward;
    cout << "Penalizacion" << endl;
    cin >> penalty;
    cout << "Jugadores:" << endl;
    cin >> players;
    cout << "Turnos:" << endl;
    cin >> turns;
    cout << "A: Automatico, M: Manual" << endl;
    cin >> mode;
    g.start(tiles, ladders, snakes, penalty, reward, players, turns, mode);
}