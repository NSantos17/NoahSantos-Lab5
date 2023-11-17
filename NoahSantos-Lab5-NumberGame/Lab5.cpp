#include "NumberGuessingGame.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

NumberGuessingGame::NumberGuessingGame() {
    srand(time(0));                                 
    wins = 0;
    losses = 0;
}

void NumberGuessingGame::startGame() {
    secretNumber = rand() % 101;                    
    attempts = 20;                                  

    do {
        int guess;
        std::cout << "Attempts remaining: " << attempts << "\nEnter your guess (0-100): ";
        std::cin >> guess;

        if (guess < 0 || guess > 100) {
            std::cout << "Please enter a number between 0 and 100." << std::endl;
            continue;
        }

        if (guess == secretNumber) {
            std::cout << getRandomWinMessage() << std::endl;
            wins++;
            break;
        }
        else if (guess < secretNumber) {
            std::cout << "Too low. Try again." << std::endl;
        }
        else {
            std::cout << "Too high. Try again." << std::endl;
        }

        attempts--;
    } while (attempts > 0);

    if (attempts == 0) {
        std::cout << getRandomLossMessage() << std::endl;
        losses++;
    }

    std::cout << "Wins: " << wins << ", Losses: " << losses << std::endl;
}

std::string NumberGuessingGame::getRandomWinMessage() {
    switch (rand() % 10) {
    case 0: return "Congratulations! You've won!";
    case 1: return "You're a winner!";
    case 2: return "Wow! You got it!";
    case 3: return "Fantastic guess! You got it!";
    case 4: return "Great job! You guessed it!";
    }
}

std::string NumberGuessingGame::getRandomLossMessage() {
    switch (rand() % 10) {
    case 0: return "Sorry, you've run out of attempts. Better luck next time!";
    case 1: return "You were close! Try again!";
    case 2: return "Don't worry, you'll get it next time!";
    case 3: return "Wrong number. Try again!";
    case 4: return "Better luck next time!";
    }
}
