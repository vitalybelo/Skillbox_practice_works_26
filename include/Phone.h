#pragma once

class Phone {

    private:
    AddressBook addressBook;

    public:
    std::string command;

    void addContact();
    void displayAddressBook();
    static Contact dialogContact();
    void actionContact(std::string command);

};
