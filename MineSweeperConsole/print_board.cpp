/*
 * Prints minesweeper board on console screen based on player guesses
 */

#include "print_board.h"

namespace Minesweeper {
	void print_board(const int* size, const std::array<char, 26>* letters) {
		// lines loop
		for (int i = -1; i < *size; i++) {
			// columns loop
			for (int j = -1; j < *size; j++) {				
				// print empty field
				if (i < 0 && j < 0) {
					std::cout << " ";
					continue;
				}

				// print columns headers
				if (i < 0) {
					std::cout << " " << (*letters)[j];
					continue;
				}

				// print lines headers
				if (j < 0) {
					std::cout << (*letters)[i];
					continue;
				}

				// print fields
				std::cout << " ?";
			}

			std::cout << std::endl;
		}
	}
}