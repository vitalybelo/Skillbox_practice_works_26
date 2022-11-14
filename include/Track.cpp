#pragma once
#include "Track.h"

Track::Track(const std::string& name, int duration) {

    this->name = name;
    time_t t = time(nullptr);
    this->recordDate = localtime(&t);
    this->duration = duration;

}

ostream &operator<<(ostream &os, const Track &track) {
    os << "track: " << "\"" << track.name << "\"";
    os << " (" << track.duration / 60 << ":" << track.duration % 60 << ") ";
    os << "recorded: " << asctime(track.recordDate);
    return os;
}

