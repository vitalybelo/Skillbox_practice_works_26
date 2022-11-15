#pragma once

/**
 * ЗАДАНИЕ №1:
 * PLAY - запускает воспроизведение трека (случайного или последовательного)
 * NEXT - переход к следующему треку (в зависимости от режима воспроизведения)
 * PAUSE - временная приостановка воспроизведения
 * STOP - останавливает воспроизведение
 * MODE - переключение режима воспроизведения: случайный или последовательный выбор трека
 * INFO - отображение состояния плеера
 * OFF - выключение плеера, и выход
 */
void skillbox_work26_task1() {

        // наша флешка с музыкой
        std::vector<Track> tracks =
        {
                {"Hound Dog (Stereo Mix)",76,"01/03/1966"},
                {"Don't Be Cruel (Stereo Mix)",64,"02/04/1968"},
                {"It's Now or Never (Remastered 2020)",107,"13/11/1971"},
                {"Blue Suede Shoes (International Hotel August 1969)",77,"05/08/1969"},
                {"Love Me Tender (International Hotel August 1969)",119,"05/08/1969"},
                {"Are You Lonesome Tonight",100,"25/11/1970"},
                {"Shes Not You",71,"23/12/1964"},
                {"I Just Cant Help Believin",157,"17/03/1966"},
                {"Heartbreak Hotel (First 'Stand-Up' Show)",63,"22/11/1967"}
        };

        // загружаем музыку в память плеера
        Player player(tracks);

        std::string comm;
        do {
            clearStdin();
            std::cout << "\nВведите команду: ";
            comm = getCommand();

            // воспроизведение
            if (comm == "play") {
                player.play();
                // пауза
            } else if (comm == "pause") {
                player.pause();
                // остановка
            } else if (comm == "stop") {
                player.stop();
                // выбор режима воспроизведения
            } else if (comm == "mode") {
                player.shuffle();
                // отображение состояния плеера
            } else if (comm == "displayScreen" || comm == "info") {
                player.display();
                // переход к следующему треку
            } else if (comm == "next") {
                player.next();
            }

        } while (comm != "off");

};