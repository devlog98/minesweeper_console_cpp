/*
 * Checks the guessed field for bombs in it or surrounding it
 */

#include "check_guess.h"

namespace Minesweeper {
	bool check_guess(const int* lineIndex, const int* columnIndex, const std::vector<std::vector<bool>>* board, std::vector<std::vector<char>>* guesses) {
		bool correctGuess = true;

		if (!(*board)[(*lineIndex)][(*columnIndex)]) {
			// check surroundings for bombs			
			int bombs = 0;
			for (int i = (*lineIndex) - 1; i <= (*lineIndex) + 1; i++) {
				if (i < 0 || i >= (*board).size()) {
					continue;
				}

				for (int j = (*columnIndex) - 1; j <= (*columnIndex) + 1; j++) {
					if (j < 0 || j >= (*board)[i].size()) {
						continue;
					}

					if ((*board)[i][j]) {
						bombs++;
					}
				}
			}

			if (bombs > 0) {
				(*guesses)[(*lineIndex)][(*columnIndex)] = ('0' + bombs);
			}
			else {
				(*guesses)[(*lineIndex)][(*columnIndex)] = ' ';
			}
		}
		else {
			// game over
			(*guesses)[(*lineIndex)][(*columnIndex)] = '!';
			correctGuess = false;
		}
		
		return correctGuess;
	}
}