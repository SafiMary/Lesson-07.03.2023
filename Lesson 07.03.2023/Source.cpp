#include <iostream>
#include <algorithm>
#include <vector>
#include "A.h"
#include "B.h"
bool pred(int a, int b) {
	return a > b;
}

int main() {


	std::vector<int> vec{ 5, 3, 4, 6, 8 };
	for (const auto el : vec) {
		std::cout << el << " ";
	}
	std::cout << std::endl;

	std::sort(vec.begin(), vec.end(), pred);
	for (const auto el : vec) {
		std::cout << el << " ";
	}
	std::cout << std::endl;
	//callback когда используются указатели на функции
	const auto x = [](int a) {
		std::cout << a << std::endl;
	};
	x(4);
	//std::any_of(vec.begin(), vec.end(), );
}