#pragma once

class VirtualWindow {

    private:
    int offsetX;
    int offsetY;
    int width;
    int height;

    public:

    VirtualWindow();
    VirtualWindow(int offsetX, int offsetY, int width, int height);

    void setOffsetX(int oX);
    void setOffsetY(int oY);
    void setWidth(int w);
    void setHeight(int h);

    int getOffsetX() const;
    int getOffsetY() const;
    int getWidth() const;
    int getHeight() const;

    void resizeWindow(int newWidth, int newHeight);

    void offsetWindow(int newOffsetX, int newOffsetY);

};

