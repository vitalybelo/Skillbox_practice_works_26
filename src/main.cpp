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
#include "Phone.cpp"
#include "skillbox_work26_task1.cpp"

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

    Phone phone;

    do {
        clearStdin();
        std::cout << "\n������� �������: ";
        phone.command = getCommand();
        if (phone.command == "add") {
            phone.addContact();
        } else if (phone.command == "see") {
            phone.displayAddressBook();
        } else if (phone.command == "call") {
            phone
        }


    } while (phone.command != "exit");

    return 0;
}
