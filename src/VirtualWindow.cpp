#include "VirtualWindow.h"

VirtualWindow::VirtualWindow() {}

VirtualWindow::VirtualWindow(int offsetX, int offsetY, int width, int height)
{
    this->offsetX = offsetX;
    this->offsetY = offsetY;
    this->width = width;
    this->height = height;
}

void VirtualWindow::setOffsetX(int oX)
{
    if (oX < 0) return;
    offsetX = oX;
}

void VirtualWindow::setOffsetY(int oY)
{
    if (oY < 0) return;
    offsetY = oY;
}

void VirtualWindow::setWidth(int w)
{
    if (w <= 0) return;
    width = w;
}

void VirtualWindow::setHeight(int h)
{
    if (h <= 0) return;
    height = h;
}

int VirtualWindow::getOffsetX() const
{
    return offsetX;
}

int VirtualWindow::getOffsetY() const
{
    return offsetY;
}

int VirtualWindow::getWidth() const
{
    return width;
}

int VirtualWindow::getHeight() const
{
    return height;
}

void VirtualWindow::resizeWindow(int newWidth, int newHeight)
{
    setWidth(newWidth);
    setHeight(newHeight);
}

void VirtualWindow::offsetWindow(int newOffsetX, int newOffsetY)
{
    setOffsetX(newOffsetX);
    setOffsetY(newOffsetY);
}


