#pragma once

class Track {

    private:

    std::string name;
    tm* recordDate;
    int duration;

    public:

    Track(const std::string& name, int duration);

    friend ostream &operator<<(ostream &os, const Track &track);
};
