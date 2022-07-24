#include <iostream>

#include "static_vector.hpp"

#define size 4

int main() {
	static_vector<int, size> vec2;

	vec2.pop_back();

	return 0;
}
