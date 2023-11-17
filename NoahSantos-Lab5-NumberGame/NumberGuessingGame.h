#ifndef NUMBERGUESSINGGAME_H
#define NUMBERGUESSINGGAME_H

#include <string>

class NumberGuessingGame {
private:
	int secretNumber;
	int attempts;
	int wins;
	int losses;

public:
	NumberGuessingGame();
	void startGame();
	std::string getRandomWinMessage();
	std::string getRandomLossMessage();
};

#endif

