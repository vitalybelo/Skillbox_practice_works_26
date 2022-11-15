#pragma once
#include "AddressBook.h"

bool AddressBook::phoneNumberPuzzle(std::string& number)
{
    std::string result;
    std::string regex = "0123456789";
    for (char i : number) {
        if (i == ' ') continue;
        if (regex.find(i) == std::string::npos) return false;
        result += i;
    }
    if (number.size() < 10) return false;
    number = "+7 " + result.substr(0,10);
    return true;
}

std::string AddressBook::dialogName()
{
    std::string name;
    std::cout << "������� ��� ��������: ";
    std::getline(std::cin, name);
    return name;
}

std::string AddressBook::dialogPhone()
{
    std::string phone;
    std::cout << "������� ����� �������� <10 ����>: ";
    do {
        clearStdin();
        std::getline(std::cin, phone);
        if (phone.empty() || phoneNumberPuzzle(phone)) break;
        std::cout << "����� <������ 10 ����> ���������� ��� ���: ";
    } while (true);

    return phone;
}

bool AddressBook::add()
{
    Contact contact;

    contact.name = dialogName();
    if (contact.name.empty()) return false;

    contact.phone = dialogPhone();
    if (contact.phone.empty()) return false;

    std::cout << "\n�������: ���: " << contact.name << ",  �����: " << contact.phone << std::endl;
    addressBook.push_back(contact);
    return true;
}

int AddressBook::findByName(std::string& name)
{
    for (int i = 0; i < addressBook.size(); i++) {
        if (addressBook.at(i).name == name) return i;
    }
    return -1;
}

int AddressBook::findByPhone(std::string& phone)
{
    for (int i = 0; i < addressBook.size(); i++) {
        if (addressBook.at(i).phone == phone) return i;
    }
    return -1;
}

void AddressBook::display()
{
    if (addressBook.empty()) {
        std::cout << "\n�������� ����� ������:\n";
        return;
    }
    std::cout << "\n�������� �����:\n\n";
    for (Contact &contact: addressBook) {
        printf("�������:  %-20s :: %s\n", contact.name.c_str(), contact.phone.c_str());
    }
}






