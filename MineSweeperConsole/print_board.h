/*
 * print_board header file
 */

#pragma once

#include <iostream>
#include <array>
#include <vector>

namespace Minesweeper {
	void print_board(const int* size, const std::array<char, 26>* letters, const std::vector<std::vector<bool>>* board, const std::vector<std::vector<char>>* guesses);
}