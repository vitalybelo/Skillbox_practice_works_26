cmake_minimum_required(VERSION 3.23)

add_executable(Skillbox_26
        main.cpp
        use_lib.cpp
        Track.cpp
        Player.cpp
        AddressBook.cpp
        Phone.cpp
        VirtualWindow.cpp
        VirtualScreen.cpp
        skillbox_work26_task1.cpp
        skillbox_work26_task2.cpp
        skillbox_work26_task3.cpp
        )

target_include_directories(Skillbox_26 PUBLIC ${INCLUDE_DIR})
