/*
 * create_board header file
 */

#pragma once

#include <vector>
#include <ctime>

namespace Minesweeper {
	std::vector<std::vector<bool>> create_board(const int* size, const int* bombs);
}
