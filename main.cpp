#include <iostream>

#include "static_vector.hpp"

#define size 4

int main() {
	static_vector<int, size> vec1{1, 2, 3, 4};

	static_vector<int, size> vec2;

	return 0;
}
