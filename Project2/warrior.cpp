#include "warrior.h"
#include <iostream>
using namespace std;

Warrior::Warrior(string nickname) : Player(nickname) {
    job_name = "Warrior";
    HP = 160; MP = 40; power = 25; defence = 15; accuracy = 75; speed = 8;
}

void Warrior::attack() {
    cout << "[����] " << nickname << " : �Ŵ��� ����� �ֵѷ���! (���ݷ� " << power << ")\n";
}
