/*
 * Selects board difficulty from 1 to 3.
 * The number of bombs will be the size times the difficulty
 */

#include "choose_board_difficulty.h"
#include "check_integer_input.h"

namespace Minesweeper {
	int choose_board_difficulty(const int* size) {
		std::string difficulty;
		int maxLength = 1;

		std::cout << "Select the board difficulty (1 - EASY | 2 - NORMAL | 3 - HARD): ";
		std::cin >> difficulty;
		std::cout << std::endl;

		// check if input is a valid number		
		return check_integer_input(&difficulty, &maxLength);
	}
}