#pragma once

class Phone {

    private:
    AddressBook addressBook;

    public:
    std::string command;

    void addContact();
    void displayAddressBook();
    Contact dialogContact();
    void callContact();

};
