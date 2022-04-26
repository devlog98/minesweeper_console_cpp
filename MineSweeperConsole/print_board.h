/*
 * print_board header file
 */

#pragma once

#include <iostream>
#include <array>

namespace Minesweeper {
	void print_board(const int* size, const std::array<char, 26>* letters);
}