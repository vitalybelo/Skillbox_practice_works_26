#pragma once

/**
 * ЗАДАНИЕ №2:
 * ADD - добавление контакта в книгу телефона
 * SEE - просмотр списка абонентов телефона
 * SMS - отправка смс абоненту по имени из списка или по номеру телефона
 * CALL - звонок абоненту по имени из списка или по номеру телефона
 * EXIT - выход
 */
void skillbox_work26_task2() {

    Phone phone;

    do {
        clearStdin();
        std::cout << "\nВведите команду: ";
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