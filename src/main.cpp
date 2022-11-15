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

    AddressBook addressBook;

    addressBook.add();

    cout << addressBook.get().size() << endl;

    return 0;
}
