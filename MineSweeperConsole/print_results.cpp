/*
 * Responsible for printing the results of the match
 */

#include "print_results.h"

namespace Minesweeper {
	bool print_results(const bool* hasWon) {
		if ((*hasWon)) {
			std::cout << "You won the match!" << std::endl;
		}
		else {
			std::cout << "You lost the match..." << std::endl;
		}

		char retry;
		std::cout << "Do you wish to play again (Y/N)? ";
		std::cin >> retry;
		
		return (retry == 'Y') ? true : false;
	}
}