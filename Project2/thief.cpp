#include "thief.h"
#include <iostream>
using namespace std;

Thief::Thief(string nickname) : Player(nickname) {
    job_name = "Thief";
    HP = 110; MP = 70; power = 20; defence = 8; accuracy = 90; speed = 18;
}

void Thief::attack() {
    cout << "[도적] " << nickname << " : 섀도 스탭 후 백어택! (정확도 " << accuracy << "%)\n";
}
