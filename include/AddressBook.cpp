#pragma once
#include "AddressBook.h"

bool AddressBook::phoneNumberPuzzle(std::string number) {
    return false;
}

bool AddressBook::add()
{
    std::string name, number;

    std::cout << "¬ведите им€ абонента: ";
    std::cin >> name;
    if (name.empty()) return false;

    std::cout << "¬ведите номер абонента: ";
    std::cin >> number;
    if (number.empty()) return false;

    addressBook.insert(std::pair<std::string, std::string>(name, number));
    return true;
}

std::map<std::string, std::string> AddressBook::get()
{
    return addressBook;
}



