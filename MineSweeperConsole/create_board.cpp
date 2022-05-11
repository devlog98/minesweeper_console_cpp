/*
 * Creates a board with random bombs for the game
 */

#include "create_board.h"

namespace Minesweeper {
	std::vector<std::vector<bool>> create_board(const int* size, const int* bombs) {
		std::vector<std::vector<bool>> board (*size, std::vector<bool>(*size, false));

		int totalBombs = (*bombs);
		int line;
		int column;

		srand(time(NULL));
		while (totalBombs > 0) {
			line = rand() % *size;
			column = rand() % *size;

			if (!board[line][column]) {
				board[line][column] = true;
				totalBombs--;
			}
		}

		return board;
	}
}