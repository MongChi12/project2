#include "thief.h"
#include <iostream>
using namespace std;

Thief::Thief(string nickname) : Player(nickname) {
    job_name = "Thief";
    HP = 110; MP = 70; power = 20; defence = 8; accuracy = 90; speed = 18;
}

void Thief::attack() {
    cout << "[����] " << nickname << " : ���� ���� �� �����! (��Ȯ�� " << accuracy << "%)\n";
}
