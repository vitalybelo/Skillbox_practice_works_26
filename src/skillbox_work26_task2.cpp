#pragma once

/**
 * ������� �2:
 * ADD - ���������� �������� � ����� ��������
 * SEE - �������� ������ ��������� ��������
 * SMS - �������� ��� �������� �� ����� �� ������ ��� �� ������ ��������
 * CALL - ������ �������� �� ����� �� ������ ��� �� ������ ��������
 * EXIT - �����
 */
void skillbox_work26_task2() {

    Phone phone;

    do {
        clearStdin();
        std::cout << "\n������� �������: ";
        phone.command = getCommand();

        if (phone.command == "add") {
            phone.addContact();
        } else if (phone.command == "see") {
            phone.displayAddressBook();
        } else if (phone.command == "call") {
            phone.actionContact("CALL");
        } else if (phone.command == "sms") {
            phone.actionContact("SMS");
        }

    } while (phone.command != "exit");

}