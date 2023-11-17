#include "NumberGuessingGame.h"
#include <iostream>

int main() {
	NumberGuessingGame game;
	char playAgain;

	do {
		game.startGame();
		std::cout << "Do you want to play again? (y/n): ";
		std::cin >> playAgain;

		if (playAgain != 'y' && playAgain != 'Y') {
			std::cout << "Thanks for playing!" << std::endl;
		}

	} while (playAgain == 'y' || playAgain == 'Y');

}