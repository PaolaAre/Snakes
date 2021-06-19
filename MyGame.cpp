#include <iostream>
#include "MyGame.h"

using namespace std;

void MyGame::start(int casillas, int ladders, int snakes, int penalty, int reward, int jugadores, int limit, string juego){
    Tablero tablero(casillas, ladders, snakes, penalty, reward);
    vector<Player> players;
    for (int i=0; i<jugadores; i++) {
        players.push_back(Player(i+1));
    }
    tablero.printTablero();
    Dice dado;
    cout << "Press C to continue next turn, or E to end the game:" << endl;

    string option;
    cin >> option;

    int turns = 0;
    bool winner = false;
    while (option != "E" && turns <= limit && winner == false) {
        if (option != "C") {
            cout << "Invalid option, please press C to continue next turn or E to end the game" << endl;
            cin >> option;
        } else {
            //Turn
            turns += 1;
            for (int i=0; i<players.size(); i++) {
                int roll  = dado.roll();
                int position = players[i].getPosition();
                int landing = position + roll;
                string tipo = "N";
                if (landing < tablero.casillas_.size()) {
                    tipo = tablero.casillas_[landing-1].getTipo();
                    landing += tablero.casillas_[landing-1].getAvance();
                    players[i].setPosition(landing);
                    cout << turns << " " << players[i].getNumber() << " " << position << " " << roll << " " << tipo << " " << players[i].getPosition() << endl;
                } else {
                    players[i].setPosition(landing);
                    cout << turns << " " << players[i].getNumber() << " " << position << " " << roll << " " << tipo << " " << players[i].getPosition() << endl;
                    winner = true;
                    break;
                }
            }
            if (juego == "M") {
                cin >> option;
            }
            
        }
    }
    cout << "-- GAME OVER --" << endl;
    if (turns >= limit) {
        cout << "The maximum number of turns has been reached..." << endl;
    }
    for (int i=0; i<players.size(); i++) {
        if (players[i].getPosition() >= tablero.casillas_.size()) {
            cout << "Player " << i+1 << " is the winner!" << endl;
            break;
        }
    }
    cout << "Thanks for playing!" << endl;
}
