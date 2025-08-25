#include "player.h"

// ���� �⺻���� ���⼭ ������ �ʱ�ȭ(�������� ���)
Player::Player(string nickname)
    : job_name("Novice"), nickname(nickname),
    level(1), HP(100), MP(50),
    power(10), defence(5), accuracy(80), speed(10) {
}

void Player::printPlayerStatus() {
    cout << "------------------------------------\n";
    cout << "* ���� �ɷ�ġ\n";
    cout << "�г���: " << nickname << "\n";
    cout << "����: " << job_name << "\n";
    cout << "Lv. " << level << "\n";
    cout << "HP: " << HP << "\n";
    cout << "MP: " << MP << "\n";
    cout << "���ݷ�: " << power << "\n";
    cout << "����: " << defence << "\n";
    cout << "��Ȯ��: " << accuracy << "\n";
    cout << "�ӵ�: " << speed << "\n";
    cout << "------------------------------------\n";
}

// getter
string Player::getJobName() { return job_name; }
string Player::getNickname() { return nickname; }
int     Player::getLevel() { return level; }
int     Player::getHP() { return HP; }
int     Player::getMP() { return MP; }
int     Player::getPower() { return power; }
int     Player::getDefence() { return defence; }
int     Player::getAccuracy() { return accuracy; }
int     Player::getSpeed() { return speed; }

// setter
void Player::setNickname(string n) { nickname = n; }
bool Player::setHP(int h) { HP = h;  return HP > 0; }   // 1 �̻� true, 0 ���� false
bool Player::setMP(int m) { MP = m;  return MP > 0; }
void Player::setPower(int v) { power = v; }
void Player::setDefence(int v) { defence = v; }
void Player::setAccuracy(int v) { accuracy = v; }
void Player::setSpeed(int v) { speed = v; }
