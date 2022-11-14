#pragma once

class Track {

    private:

    std::string name;
    tm recordDate;
    int duration;

    public:

    Track(const std::string& name, int duration, std::string date_string);

    friend std::ostream &operator<<(std::ostream &os, const Track &track);

};
