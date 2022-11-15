#pragma once

class AddressBook {

    private:

    std::map<std::string, std::string> addressBook{};

    public:

    bool add();
    bool phoneNumberPuzzle (std::string number);
    std::map<std::string, std::string> get();


};

