#pragma once
#include <vector>

class Player {

private:

    bool isPlay = false;
    bool isPause = false;
    bool isShuffle = true;
    int trackPlay = -1;
    int trackLast = 0;
    std::vector<Track> tracks;

    public:

    explicit Player(const std::vector<Track> &tracks);
    void play();
    void pause();
    void stop();
    void shuffle();
    void display() const;
    void next();

};
