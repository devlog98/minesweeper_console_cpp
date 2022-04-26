/* Mine Sweeper Console
 *
 * This is the core of the game logic
 *
 */

#include <iostream>

#include "print_header.h"
#include "print_board.h"

static int size = 26;
static std::array<char, 26> letters = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

int main() {
	using namespace Minesweeper;

	print_header();

	print_board(&size, &letters);

	char c;
	std::cin >> c;
}