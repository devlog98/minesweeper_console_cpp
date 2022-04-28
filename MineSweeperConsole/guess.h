/*
 * guess header file
 */

#pragma once

#include <iostream>
#include <array>
#include <vector>
#include <string>

namespace Minesweeper {
	bool guess(const std::array<char, 26>* letters, const std::vector<std::vector<bool>>* board, std::vector<std::vector<char>>* guesses);
}