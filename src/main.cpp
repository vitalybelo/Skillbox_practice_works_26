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
     * ЗАДАНИЕ №1:
     * PLAY - запускает воспроизведение трека (случайного или последовательного)
     * NEXT - переход к следующему треку (в зависимости от режима воспроизведения)
     * PAUSE - временная приостановка воспроизведения
     * STOP - останавливает воспроизведение
     * MODE - переключение режима воспроизведения: случайный или последовательный выбор трека
     * INFO - отображение состояния плеера
     * OFF - выключение плеера, и выход
    */
//    cout << "ЗАДАНИЕ №1\n";
//    skillbox_work26_task1();

    Phone phone;

    do {
        clearStdin();
        std::cout << "\nВведите команду: ";
        phone.command = getCommand();
        if (phone.command == "add") {
            phone.addContact();
        } else if (phone.command == "see") {
            phone.displayAddressBook();
        } else if (phone.command == "call") {
            phone.callContact();
        }


    } while (phone.command != "exit");

    return 0;
}
