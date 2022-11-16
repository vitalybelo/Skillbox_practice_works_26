#include "VirtualScreen.h"
#include <iostream>

void VirtualScreen::drawInMemory()
{
    for (int y = 0; y < sizeY; y++)
        for (int x = 0; x < sizeX; x++) screen[y][x] = ' ';

    int y1 = window.getOffsetY();
    int y2 = window.getOffsetY() + window.getHeight();
    int x1 = window.getOffsetX();
    int x2 = window.getOffsetX() + window.getWidth();

    for (int y = y1; y < y2; y++)
        for (int x = x1; x < x2; x++) screen[y][x] = '*';
}

bool VirtualScreen::defineWindow(int offsetX, int offsetY, int width, int height)
{
    if (width < 0 || height < 0 || offsetX < 0 || offsetY < 0) return false;

    int x = offsetX + width;
    int y = offsetY + height;
    if (x > sizeX || y > sizeY) return false;

    window.offsetWindow(offsetX, offsetY);
    window.resizeWindow(width, height);
    return true;
}

void VirtualScreen::displayScreen()
{
    std::cout << std::endl;
    for (int i = 0; i < sizeX + 2; i++) std::cout << '-';
    std::cout << std::endl;

    for (int y = 0; y < sizeY; y++) {
        std::cout << "|";
        for (int x = 0; x < sizeX; x++) {
            std::cout << screen[y][x];
        }
        std::cout << "|" << std::endl;
    }
    for (int i = 0; i < sizeX + 2; i++) std::cout << '-';
    std::cout << std::endl;
}

bool VirtualScreen::moveWindow()
{
    int x1, y1;
    std::cout << "\nВведите координаты x y (через пробел): ";
    std::cin >> x1 >> y1;
    if (x1 < 0 || y1 < 0) {
        std::cout << "*** вы указали отрицательные координаты ***";
        return false;
    }
    int x2 = x1 + window.getWidth();
    int y2 = y1 + window.getHeight();
    if (x2 > sizeX || y2 > sizeY) {
        std::cout << "*** невозможно переместить окно в эту координату ***";
        return false;
    }
    window.offsetWindow(x1, y1);
    return true;
}

bool VirtualScreen::sizeWindow()
{
    int w, h;
    std::cout << "\nВведите ширину и высоту (через пробел): ";
    std::cin >> w >> h;
    if (w < 0 || h < 0) {
        std::cout << "*** вы указали отрицательные значения ***";
        return false;
    }
    int x = window.getOffsetX() + w;
    int y = window.getOffsetY() + h;
    if (x > sizeX || y > sizeY) {
        std::cout << "*** невозможно изменить размеры окна ***";
        return false;
    }
    window.resizeWindow(w, h);
    return true;
}
