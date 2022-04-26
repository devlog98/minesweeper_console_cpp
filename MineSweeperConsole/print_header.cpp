/*
 * Responsible for printing the header text on the console screen
 */

#include "print_header.h"

namespace Minesweeper {
	void print_header() {
		std::cout << "*********************" << std::endl;
		std::cout << "*****MINESWEEPER*****" << std::endl;
		std::cout << "*********************" << std::endl;
	}
}