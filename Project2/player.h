#pragma once
#include <string>
#include <iostream>
using namespace std;

class Player {
public:
    Player(string nickname);
    virtual ~Player() = default;

    // 순수 가상 함수
    virtual void attack() = 0;

    // 상태 출력
    void printPlayerStatus();

    // getter
    string getJobName();
    string getNickname();
    int getLevel();
    int getHP();
    int getMP();
    int getPower();
    int getDefence();
    int getAccuracy();
    int getSpeed();

    // setter (HP/MP는 성공 여부 반환)
    void setNickname(string nickname);
    bool setHP(int HP);
    bool setMP(int MP);
    void setPower(int power);
    void setDefence(int defence);
    void setAccuracy(int accuracy);
    void setSpeed(int speed);

protected:
    string job_name;
    string nickname;
    int level;
    int HP;
    int MP;
    int power;
    int defence;
    int accuracy;
    int speed;
};
#pragma once
