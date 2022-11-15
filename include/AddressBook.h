#pragma once

struct Contact {

    std::string name;
    std::string phone;
};

class AddressBook {

    private:

    std::vector<Contact> addressBook;

    public:

    static std::string dialogName();
    static std::string dialogPhone();
    static bool phoneNumberPuzzle(std::string& number);

    bool add();
    void display();
    int findByName(std::string& name);
    int findByPhone(std::string& phone);

};

