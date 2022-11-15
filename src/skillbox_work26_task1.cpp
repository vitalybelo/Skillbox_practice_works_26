#pragma once

/**
 * ������� �1:
 * PLAY - ��������� ��������������� ����� (���������� ��� �����������������)
 * NEXT - ������� � ���������� ����� (� ����������� �� ������ ���������������)
 * PAUSE - ��������� ������������ ���������������
 * STOP - ������������� ���������������
 * MODE - ������������ ������ ���������������: ��������� ��� ���������������� ����� �����
 * INFO - ����������� ��������� ������
 * OFF - ���������� ������, � �����
 */
void skillbox_work26_task1() {

        // ���� ������ � �������
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

        // ��������� ������ � ������ ������
        Player player(tracks);

        std::string comm;
        do {
            clearStdin();
            std::cout << "\n������� �������: ";
            comm = getCommand();

            // ���������������
            if (comm == "play") {
                player.play();
                // �����
            } else if (comm == "pause") {
                player.pause();
                // ���������
            } else if (comm == "stop") {
                player.stop();
                // ����� ������ ���������������
            } else if (comm == "mode") {
                player.shuffle();
                // ����������� ��������� ������
            } else if (comm == "display" || comm == "info") {
                player.display();
                // ������� � ���������� �����
            } else if (comm == "next") {
                player.next();
            }

        } while (comm != "off");

};