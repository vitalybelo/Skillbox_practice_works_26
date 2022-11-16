#pragma once
#include <iostream>
#include "use_lib.h"
#include "VirtualScreen.h"

/**
 * ЗАДАНИЕ №3:
 * DISPLAY (SEE) - вывод в консоль виртуального экрана с окном
 * MOVE - перемещение окна на новые координаты
 * SIZE - изменение размера окна
 * EXIT - выход
 */
void skillbox_work26_task3() {

    VirtualScreen vs;

    bool nuevo;
    std::string limit = std::to_string(SCREEN_SIZE_X) + "*" + std::to_string(SCREEN_SIZE_Y);
    std::cout << "\nУстановлен размер экрана: " << limit;
    std::cout << "\nВведите параметры окна (x y width height) через пробел: ";
    do {
        clearStdin();
        int x, y, w, h;
        std::cin >> x >> y >> w >> h;
        nuevo = vs.defineWindow(x, y, w, h);
        if (!nuevo) {
            std::cout << "Введенные данные не позволяют разместить окно на экране " + limit << std::endl;
            std::cout << "Пожалуйста повторите ввод (x y width height) через пробел:";
        }
    } while (!nuevo);
    std::cout << "*** Окно успешно создано ***\n";

    std::string comm;
    do {
        clearStdin();
        std::cout << "\nВведите команду: ";
        comm = getCommand();

        if (comm == "display" || comm == "see") {
            vs.drawInMemory();
            vs.displayScreen();
        } else if (comm == "move") {
            if (!vs.moveWindow())
                std::cout << "\n*** отмена операции***\n";
        } else if (comm == "size") {
            if (!vs.sizeWindow())
                std::cout << "\n*** отмена операции***\n";
        }
    } while (comm != "exit");



}