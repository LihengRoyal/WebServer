#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> vec{4, 1, 2, 6, 7, 3};
	std::sort(vec.begin(), vec.end());
	for (auto c : vec) {
		std::cout << c << " ";
	}
	std::cout << std::endl;
	return 0;	
}
