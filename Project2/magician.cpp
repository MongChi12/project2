#include "magician.h"
#include <iostream>
using namespace std;

Magician::Magician(string nickname) : Player(nickname) {
    job_name = "Magician";
    HP = 90; MP = 180; power = 18; defence = 6; accuracy = 85; speed = 12;
}

void Magician::attack() {
    cout << "[������] " << nickname << " : ���̾ ����! (MP -10, ���ݷ� " << power << ")\n";
}
