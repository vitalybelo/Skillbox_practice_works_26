#pragma once

struct Contact {

    std::string name;
    std::string phone;
};

class AddressBook {

    private:

    std::vector<Contact> addressBook;

    public:

    static std::string dialogName(std::string query);
    static std::string dialogPhone(std::string query);
    static bool phoneNumberPuzzle(std::string& number);

    bool add();
    void display();
    bool empty();
    Contact get(int index);
    int findByName(std::string& name);
    int findByPhone(std::string& phone);

};

