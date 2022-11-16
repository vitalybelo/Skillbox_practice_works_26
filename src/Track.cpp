#include <iostream>
#include "use_lib.h"
#include "Track.h"

Track::Track(const std::string& name, int duration, std::string date_string) {

    this->name = name;
    this->duration = duration;
    this->recordDate = get_TMDate(std::move(date_string));
}

std::ostream &operator<<(std::ostream &os, const Track &track) {
    os << "track: " << "\"" << track.name << "\"";
    os << " (" << track.duration / 60 << ":" << track.duration % 60 << ") ";
    os << "recorded: " << track.recordDate.tm_mday << "." << track.recordDate.tm_mon + 1;
    os << "." << track.recordDate.tm_year + 1900;
    return os;
}

