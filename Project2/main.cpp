#include <iostream>
#include <memory>
#include "player.h"
#include "warrior.h"
#include "magician.h"
#include "thief.h"
#include "archer.h"
using namespace std;

int main() {
    string jobs[] = { "전사", "마법사", "도적", "궁수" };
    string nickname;
    int job_choice = 0;

    cout << "* 닉네임을 입력해주세요: ";
    cin >> nickname;

    cout << "<전직 시스템>\n" << nickname << "님, 환영합니다!\n";
    cout << "* 원하시는 직업을 선택해주세요.\n";
    for (int i = 0; i < 4; ++i) cout << (i + 1) << ". " << jobs[i] << "\n";
    cout << "선택: ";
    cin >> job_choice;

    unique_ptr<Player> player; // 스마트 포인터로 안전하게
    switch (job_choice) {
    case 1: player = make_unique<Warrior>(nickname);  break;
    case 2: player = make_unique<Magician>(nickname); break;
    case 3: player = make_unique<Thief>(nickname);    break;
    case 4: player = make_unique<Archer>(nickname);   break;
    default:
        cout << "잘못된 입력입니다.\n"; return 0;
    }

    player->attack();
    player->printPlayerStatus();

    // 배열로 관리하고 싶으면:
    // Player* party[4] = { nullptr, };
    // party[0] = new Warrior(nickname);
    // party[0]->attack(); ...
    // delete party[0];

    return 0;
}
