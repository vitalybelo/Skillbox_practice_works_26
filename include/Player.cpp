#pragma once
#include "Player.h"

Player::Player(const std::vector<Track> &tracks) : tracks(tracks)
{
    trackLast = (int)tracks.size() - 1;
}

void Player::play()
{
    if (isPause) {
        // ���������� ��������������� ����� �����
        std::cout << "\n*** ������������ ***";
        isPause = false;
    } else {
        // ����� ����� � ����������� �� continuous ��� shuffle
        if (!isPlay) {
            if (isShuffle) {
                trackPlay = irandom_next(0, trackLast);
            } else {
                trackPlay++;
                if (trackPlay > trackLast) trackPlay = 0;
            }
            isPlay = true;
        } else {
            // ������� play �������� - ����������, �� ���������
            std::cout << "\n*** �� ��������� ***";
        }
    }

    std::cout << "\n��������������� �����:\n";
    std::cout << tracks.at(trackPlay) << std::endl;
}

void Player::pause()
{
    if (!isPause && isPlay) {
        std::cout << "\n*** ����������� ����� ��� ����� ***\n";
        std::cout << tracks.at(trackPlay) << std::endl;
        isPause = true;
    } else {
        std::cout << "\n*** �� ��������� ***\n";
    }
}

void Player::stop()
{
    if (isPlay) {
        isPause = false;
        isPlay = false;
        std::cout << "\n*** ����������� ��������������� ***\n";
        std::cout << tracks.at(trackPlay) << std::endl;
    } else {
        std::cout << "\n*** �� ��������� ***\n";
    }
}

void Player::shuffle()
{
    isShuffle = !isShuffle;
    std::cout << "������ �����: ";
    std::cout << (isShuffle ? "Shuffle" : "Continuous") << std::endl;
}

void Player::display() const
{
    std::cout << "\n*** ��������� ������ ***";
    std::cout << "\n���������������: ";
    std::cout << (isPlay ? "����� ����� " + std::to_string(trackPlay) : "�����������");
    if (isPlay)
        std::cout << (isPause ? " (PAUSED)" : " (PLAYING)");
    std::cout << "\n���������� ����������� ������: " << (trackLast + 1);
    std::cout << "\n����� ���������������: ";
    std::cout << (isShuffle ? "Shuffle" : "Continuous") << std::endl;
}

void Player::next()
{
    isPlay = false;
    isPause = false;
    this->play();
}



