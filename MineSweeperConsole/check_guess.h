/*
 * check_guess header file
 */

#pragma once

#include <vector>

namespace Minesweeper {
	bool check_guess(const int* lineIndex, const int* columnIndex, const std::vector<std::vector<bool>>* board, std::vector<std::vector<char>>* guesses);
}