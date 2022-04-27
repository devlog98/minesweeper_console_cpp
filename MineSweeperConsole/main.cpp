/* Mine Sweeper Console
 *
 * This is the core of the game logic
 *
 */

#include <iostream>
#include <stdlib.h>
#include <vector>

#include "print_header.h"
#include "print_board.h"
#include "create_board.h"
#include "guess.h"

static int size = 10;
static std::array<char, 26> letters = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
static std::vector<std::vector<bool>> board;
static std::vector<std::vector<char>> guesses(size, std::vector<char>(size, '-'));

int main() {
	using namespace Minesweeper;

	board = create_board(&size);

	while (true) {
		print_header();

		print_board(&size, &letters, &board, &guesses);

		guess(&letters, &board, &guesses);

		system("CLS");
	}
}