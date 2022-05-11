/*
 * Selects size of the board from 1 to 26
 */

#include "choose_board_size.h"

namespace Minesweeper {
	int choose_board_size() {
		int size;

		std::cout << "Select the size of the squared board (1 to 26): ";
		std::cin >> size;
		std::cout << std::endl;

		return size;
	}
}