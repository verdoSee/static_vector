#include <array>
#include <cstddef>
#include <iostream>

#include "static_vector.hpp"

#define size 4

int main() {
	static_vector<int, size> vec{1, 2, 3, 4};
	std::cout << vec[0];

	return 0;
}
