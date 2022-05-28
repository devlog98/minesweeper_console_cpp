/*
* Gets Player input in order to check for bomb
*/

#include "guess.h"

namespace Minesweeper {
	std::tuple<int, int> guess(const int* size, const std::array<char, 26>* letters) {
		// input
		std::cout << "Put your guess! First line then column (example - AB): ";
		std::string guess;
		std::cin >> guess;

		// get line
		int lineIndex = -1;
		for (int i = 0; i < (*size); i++) {
			if (guess[0] == (*letters)[i]) {
				lineIndex = i;
				break;
			}
		}

		// get column
		int columnIndex = -1;
		for (int i = 0; i < (*size); i++) {
			if (guess[1] == (*letters)[i]) {
				columnIndex = i;
				break;
			}
		}

		std::tuple<int, int> playerGuess;
		playerGuess = std::make_tuple(lineIndex, columnIndex);
		return playerGuess;
	}
}