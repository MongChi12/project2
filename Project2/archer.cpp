#include "archer.h"
#include <iostream>
using namespace std;

Archer::Archer(string nickname) : Player(nickname) {
    job_name = "Archer";
    HP = 100; MP = 80; power = 22; defence = 7; accuracy = 95; speed = 14;
}

void Archer::attack() {
    cout << "[±Ã¼ö] " << nickname << " : ¿¬¼Ó »ç°Ý! (¸íÁß·ü " << accuracy << "%)\n";
}
