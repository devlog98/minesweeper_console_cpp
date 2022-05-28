/*
 * Checks integer inputs that the Player types
 */

#include "check_integer_input.h"

namespace Minesweeper {
	int check_integer_input(const std::string* input, const int* maxLength) {
		if ((*input).length() > (*maxLength)) {
			return 0;
		}

		for (char const& ch : (*input)) {
			if (std::isdigit(ch) == 0)
				return 0;
		}

		return std::stoi((*input));
	}
}