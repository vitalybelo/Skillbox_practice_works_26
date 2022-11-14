#include <iostream>
#include "use_lib.h"
#include "Track.cpp"
#include "Player.cpp"
using namespace std;

int main() {
    setlocale1251();

    Track track1 = {"Hound Dog (Stereo Mix)",45};

    cout << track1 << endl;


    return 0;
}
