#include <iostream>
#include "AddressBook.h"
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
    contact.name = AddressBook::dialogName("Введите имя абонента (ENTER - пропустить): ");
    if (contact.name.empty()) {
        contact.phone = AddressBook::dialogPhone("Введите номер телефона <10 цифр> (ENTER - пропустить): ");
    }
    return contact;
}

void Phone::actionContact(std::string command)
{
    Contact contact = dialogContact();
    if (contact.name.empty() && contact.phone.empty()) {
        std::cout << "\n*** Команда отменена ***\n";
        return;
    }
    if (!contact.name.empty()) {
        // звонок по имени из телефонной книги
        if (addressBook.empty()) {
            std::cout << "\n*** Телефонная книга пуста ***\n";
            return;
        }
        int index = addressBook.findByName(contact.name);
        if (index == -1 ) {
            std::cout << "\n*** Запись с таким именем не найдена ***\n";
            return;
        }
        contact = addressBook.get(index);
    } else {
        // звонок по номеру телефона
        int index = addressBook.findByPhone(contact.phone);
        if (index >= 0) {
            contact = addressBook.get(index);
        } else {
            contact.name = "OFF_lIST";
        }
        std::cout << "\n" << command <<"-> " << contact.name << " :: " << contact.phone << std::endl;
    }
}
