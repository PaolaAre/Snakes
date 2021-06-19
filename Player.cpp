#include "Player.h"
#include <iostream>

using namespace std;

Player::Player() {
    position_ = 1;
    number_ = 0;
}

Player::Player(int number) {
    position_ = 1;
    number_ = number;
}

int Player::getPosition(){
    return position_;
}
int Player::getNumber(){
    return number_;
}

void Player::setPosition(int position){
    if (position <= 0) {
        position_ = 1;
    } else{
        position_ = position;
    }
}