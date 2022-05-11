/* Mine Sweeper Console
 *
 * This is the core of the game logic
 *
 */

#include <iostream>
#include <stdlib.h>
#include <vector>

#include "check_has_won.h"
#include "choose_board_size.h"
#include "choose_board_difficulty.h"
#include "create_board.h"
#include "guess.h"
#include "print_header.h"
#include "print_board.h"
#include "print_results.h"

static int size;
static int bombs;
static std::array<char, 26> letters = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
static std::vector<std::vector<bool>> board;
static std::vector<std::vector<char>> guesses;

int main() {
	using namespace Minesweeper;

	bool retry = true;
	while (retry) {
		// game setup
		system("CLS");
		print_header();
		size = choose_board_size();
		bombs = choose_board_difficulty(&size);

		// create game
		board = create_board(&size, &bombs);
		guesses = std::vector<std::vector<char>>(size, std::vector<char>(size, '?'));

		// game logic
		bool canPlay = true;
		while (canPlay && !check_has_won(&bombs, &guesses)) {
			system("CLS");
			print_header();
			print_board(&size, &letters, &board, &guesses);
			canPlay = guess(&letters, &board, &guesses);
		}

		// results
		system("CLS");
		print_header();
		print_board(&size, &letters, &board, &guesses);
		retry = print_results(&canPlay);
	}
}