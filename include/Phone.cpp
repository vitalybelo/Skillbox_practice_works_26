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
    contact.name = AddressBook::dialogName("������� ��� �������� (ENTER - ����������): ");
    if (contact.name.empty()) {
        contact.phone = AddressBook::dialogPhone("������� ����� �������� <10 ����> (ENTER - ����������): ");
    }
    return contact;
}

void Phone::actionContact(std::string command)
{
    Contact contact = dialogContact();
    if (contact.name.empty() && contact.phone.empty()) {
        std::cout << "\n*** ������� �������� ***\n";
        return;
    }
    if (!contact.name.empty()) {
        // ������ �� ����� �� ���������� �����
        if (addressBook.empty()) {
            std::cout << "\n*** ���������� ����� ����� ***\n";
            return;
        }
        int index = addressBook.findByName(contact.name);
        if (index == -1 ) {
            std::cout << "\n*** ������ � ����� ������ �� ������� ***\n";
            return;
        }
        contact = addressBook.get(index);
    } else {
        // ������ �� ������ ��������
        int index = addressBook.findByPhone(contact.phone);
        if (index >= 0) {
            contact = addressBook.get(index);
        } else {
            contact.name = "OFF_lIST";
        }
        std::cout << "\n" << command <<"-> " << contact.name << " :: " << contact.phone << std::endl;
    }
}
