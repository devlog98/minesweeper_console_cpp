/*
 * Checks if the game has already ended
 */

#include "check_has_won.h"

namespace Minesweeper {
	bool check_has_won(const int* bombs, const std::vector<std::vector<char>>* guesses) {
		int guessesLeft = 0;
		for (std::vector<char> guesses : (*guesses)) {
			for (char guess : guesses) {
				if (guess == '?') {
					guessesLeft++;
				}
			}
		}

		if (guessesLeft == (*bombs)) {
			return true;
		}

		return false;
	}
}