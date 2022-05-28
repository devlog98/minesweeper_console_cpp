/*
 * Selects size of the board from 1 to 26
 */

#include "choose_board_size.h"
#include "check_integer_input.h"

namespace Minesweeper {
	int choose_board_size() {
		std::string size;
		int maxLength = 2;

		std::cout << "Select the size of the squared board (3 to 26): ";
		std::cin >> size;
		std::cout << std::endl;

		// check if input is a valid number		
		return check_integer_input(&size, &maxLength);
	}
}