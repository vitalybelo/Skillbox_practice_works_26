#pragma once
#include "Phone.h"

void Phone::addContact()
{
    addressBook.add();
}

void Phone::displayAddressBook()
{
    addressBook.display();
}

Contact Phone::dialogContact() {

    Contact contact{"",""};
    contact.name = AddressBook::dialogName();
    if (contact.name.empty()) {
        contact.phone = AddressBook::dialogPhone();
    }
    return contact;
}

void Phone::callContact()
{
    if (addressBook.empty()) {
        std::cout << "\n*** Телефонная книга пуста ***\n";
    }
    Contact contact = dialogContact();
    if (contact.name.empty() && contact.phone.empty()) {
        std::cout << "\n*** Команда отменена ***\n";
    } else {



    }
}
