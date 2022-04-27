/*
* Gets Player input in order to check for bomb
*/

#include "guess.h"

namespace Minesweeper {
	void guess(const std::array<char, 26>* letters, const std::vector<std::vector<bool>>* board, std::vector<std::vector<char>>* guesses) {
		// input
		std::cout << "Put your guess, first line then column: ";
		std::string guess;
		std::cin >> guess;

		// get line
		int lineIndex = -1;
		for (int i = 0; i < (*letters).size(); i++) {
			if (guess[0] == (*letters)[i]) {
				lineIndex = i;
				break;
			}
		}

		// get column
		int columnIndex = -1;
		for (int i = 0; i < (*letters).size(); i++) {
			if (guess[1] == (*letters)[i]) {
				columnIndex = i;
				break;
			}
		}

		// check guess
		if (!(*board)[lineIndex][columnIndex]) {
			(*guesses)[lineIndex][columnIndex] = ' ';
		}
		else {
			(*guesses)[lineIndex][columnIndex] = '!';
		}
	}
}