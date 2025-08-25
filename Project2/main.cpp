#include <iostream>
#include <memory>
#include "player.h"
#include "warrior.h"
#include "magician.h"
#include "thief.h"
#include "archer.h"
using namespace std;

int main() {
    string jobs[] = { "����", "������", "����", "�ü�" };
    string nickname;
    int job_choice = 0;

    cout << "* �г����� �Է����ּ���: ";
    cin >> nickname;

    cout << "<���� �ý���>\n" << nickname << "��, ȯ���մϴ�!\n";
    cout << "* ���Ͻô� ������ �������ּ���.\n";
    for (int i = 0; i < 4; ++i) cout << (i + 1) << ". " << jobs[i] << "\n";
    cout << "����: ";
    cin >> job_choice;

    unique_ptr<Player> player; // ����Ʈ �����ͷ� �����ϰ�
    switch (job_choice) {
    case 1: player = make_unique<Warrior>(nickname);  break;
    case 2: player = make_unique<Magician>(nickname); break;
    case 3: player = make_unique<Thief>(nickname);    break;
    case 4: player = make_unique<Archer>(nickname);   break;
    default:
        cout << "�߸��� �Է��Դϴ�.\n"; return 0;
    }

    player->attack();
    player->printPlayerStatus();

    // �迭�� �����ϰ� ������:
    // Player* party[4] = { nullptr, };
    // party[0] = new Warrior(nickname);
    // party[0]->attack(); ...
    // delete party[0];

    return 0;
}
