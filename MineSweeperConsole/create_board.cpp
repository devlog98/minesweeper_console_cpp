/*
 * Creates a board with random bombs for the game
 */

#include "create_board.h"

namespace Minesweeper {
	std::vector<std::vector<bool>> create_board(const int* size) {
		std::vector<std::vector<bool>> board (*size, std::vector<bool>(*size, false));

		int bombs = 10;
		int line;
		int column;

		srand(time(NULL));
		while (bombs > 0) {
			line = rand() % *size;
			column = rand() % *size;

			if (!board[line][column]) {
				board[line][column] = true;
				bombs--;
			}
		}

		return board;
	}
}