#include <iostream>
#include <vector>
#include "use_lib.h"
#include "Track.h"
#include "Player.h"

Player::Player(const std::vector<Track> &tracks) : tracks(tracks)
{
    trackLast = (int)tracks.size() - 1;
}

void Player::play()
{
    if (isPause) {
        // продолжаем воспроизведение после паузы
        std::cout << "\n*** продолжается ***";
        isPause = false;
    } else {
        // выбор трека в зависимости от continuous или shuffle
        if (!isPlay) {
            if (isShuffle) {
                trackPlay = irandom_next(0, trackLast);
            } else {
                trackPlay++;
                if (trackPlay > trackLast) trackPlay = 0;
            }
            isPlay = true;
        } else {
            // нажатие play повторно - уведомляем, не реагируем
            std::cout << "\n*** Не сработало ***";
        }
    }

    std::cout << "\nВоспроизведение песни:\n";
    std::cout << tracks.at(trackPlay) << std::endl;
}

void Player::pause()
{
    if (!isPause && isPlay) {
        std::cout << "\n*** Установлена пауза для трека ***\n";
        std::cout << tracks.at(trackPlay) << std::endl;
        isPause = true;
    } else {
        std::cout << "\n*** Не сработало ***\n";
    }
}

void Player::stop()
{
    if (isPlay) {
        isPause = false;
        isPlay = false;
        std::cout << "\n*** Остановлено воспроизведение ***\n";
        std::cout << tracks.at(trackPlay) << std::endl;
    } else {
        std::cout << "\n*** Не сработало ***\n";
    }
}

void Player::shuffle()
{
    isShuffle = !isShuffle;
    std::cout << "Выбран режим: ";
    std::cout << (isShuffle ? "Shuffle" : "Continuous") << std::endl;
}

void Player::display() const
{
    std::cout << "\n*** Состояние плеера ***";
    std::cout << "\nВоспроизведение: ";
    std::cout << (isPlay ? "номер трека " + std::to_string(trackPlay) : "остановлено");
    if (isPlay)
        std::cout << (isPause ? " (PAUSED)" : " (PLAYING)");
    std::cout << "\nКоличество загруженных треков: " << (trackLast + 1);
    std::cout << "\nРежим воспроизведения: ";
    std::cout << (isShuffle ? "Shuffle" : "Continuous") << std::endl;
}

void Player::next()
{
    isPlay = false;
    isPause = false;
    this->play();
}



