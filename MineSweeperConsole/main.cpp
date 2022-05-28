/* Mine Sweeper Console
 *
 * This is the core of the game logic
 *
 */

#include <iostream>
#include <thread>
#include <chrono>
#include <stdlib.h>
#include <vector>

#include "check_guess.h"
#include "check_has_won.h"
#include "choose_board_size.h"
#include "choose_board_difficulty.h"
#include "create_board.h"
#include "guess.h"
#include "print_board.h"
#include "print_developer.h"
#include "print_header.h"
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
		// initial logo
		print_developer();
		std::this_thread::sleep_for(std::chrono::seconds(3));

		// game setup
		system("CLS");
		print_header();

		// board size
		size = 0;
		while (size <= 2 || size > 26) {
			size = choose_board_size();
		}

		// board difficulty
		int difficulty = 0;
		while (difficulty <= 0 || difficulty > 3) {
			difficulty = choose_board_difficulty(&size);
		}

		// create game
		bombs = (size * difficulty);
		board = create_board(&size, &bombs);
		guesses = std::vector<std::vector<char>>(size, std::vector<char>(size, '?'));

		// game logic
		bool canPlay = true;
		std::tuple<int, int> playerGuess;
		while (canPlay && !check_has_won(&bombs, &guesses)) {
			system("CLS");
			print_header();
			print_board(&size, &letters, &board, &guesses);

			playerGuess = std::make_tuple(-1, -1);
			while (std::get<0>(playerGuess) < 0 || std::get<1>(playerGuess) < 0) {
				playerGuess = guess(&size, &letters);
			}

			canPlay = check_guess(&std::get<0>(playerGuess), &std::get<1>(playerGuess), &board, &guesses);
		}

		// results
		system("CLS");
		print_header();
		print_board(&size, &letters, &board, &guesses);
		retry = print_results(&canPlay);
	}
}