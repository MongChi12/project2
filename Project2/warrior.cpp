#include "warrior.h"
#include <iostream>
using namespace std;

Warrior::Warrior(string nickname) : Player(nickname) {
    job_name = "Warrior";
    HP = 160; MP = 40; power = 25; defence = 15; accuracy = 75; speed = 8;
}

void Warrior::attack() {
    cout << "[전사] " << nickname << " : 거대한 대검을 휘둘렀다! (공격력 " << power << ")\n";
}
