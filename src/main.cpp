#include <iostream>
#include <sstream>
#include <random>
#include <vector>
#include <algorithm>
#include "use_lib.h"
#include "Track.cpp"
#include "Player.cpp"
#include "AddressBook.cpp"
#include "Phone.cpp"
#include "VirtualWindow.cpp"
#include "VirtualScreen.cpp"
#include "skillbox_work26_task1.cpp"
#include "skillbox_work26_task2.cpp"
#include "skillbox_work26_task3.cpp"


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
    std::cout << "\nЗАДАНИЕ №1\n";
    skillbox_work26_task1();

    /**
     * ЗАДАНИЕ №2:
     * ADD - добавление контакта в книгу телефона
     * SEE - просмотр списка абонентов телефона
     * SMS - отправка смс абоненту по имени из списка или по номеру телефона
     * CALL - звонок абоненту по имени из списка или по номеру телефона
     * EXIT - выход
     */
    std::cout << "\nЗАДАНИЕ №2\n";
    skillbox_work26_task2();

    /**
     * ЗАДАНИЕ №3:
     * DISPLAY (SEE) - вывод в консоль виртуального экрана с окном
     * MOVE - перемещение окна на новые координаты
     * SIZE - изменение размера окна
     * EXIT - выход
     */
    std::cout << "\nЗАДАНИЕ №3\n";
    skillbox_work26_task3();


    return 0;
}
