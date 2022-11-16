#pragma once
#include "VirtualWindow.h"

#define SCREEN_SIZE_X 40
#define SCREEN_SIZE_Y 15

class VirtualScreen {

    private:
    int sizeY = SCREEN_SIZE_Y;
    int sizeX = SCREEN_SIZE_X;
    char screen[SCREEN_SIZE_Y][SCREEN_SIZE_X]{};
    VirtualWindow window{0,0,2,2};

    public:

    bool defineWindow(int offsetX, int offsetY, int width, int height);

    void drawInMemory();

    void displayScreen();

    bool moveWindow();

    bool sizeWindow();


};

