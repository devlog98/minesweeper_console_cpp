/*
 * guess header file
 */

#pragma once

#include <iostream>
#include <array>
#include <string>
#include <tuple>

namespace Minesweeper {
	std::tuple<int, int> guess(const int* size, const std::array<char, 26>* letters);
}