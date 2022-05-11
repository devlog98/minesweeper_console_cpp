/*
 * check_has_won header file
 */

#pragma once

#include <vector>

namespace Minesweeper {
	bool check_has_won(const int* bombs, const std::vector<std::vector<char>>* guesses);
}