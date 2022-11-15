#include <iostream>
#include <sstream>
#include <random>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
#include "use_lib.h"
#include "Track.cpp"
#include "Player.cpp"
#include "AddressBook.cpp"
#include "skillbox_work26_task1.cpp"
using namespace std;

int main() {
    setlocale1251();

    /**
     * ������� �1:
     * PLAY - ��������� ��������������� ����� (���������� ��� �����������������)
     * NEXT - ������� � ���������� ����� (� ����������� �� ������ ���������������)
     * PAUSE - ��������� ������������ ���������������
     * STOP - ������������� ���������������
     * MODE - ������������ ������ ���������������: ��������� ��� ���������������� ����� �����
     * INFO - ����������� ��������� ������
     * OFF - ���������� ������, � �����
    */
//    cout << "������� �1\n";
//    skillbox_work26_task1();

    AddressBook addressBook;

    addressBook.add();

    cout << addressBook.get().size() << endl;

    return 0;
}
