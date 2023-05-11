#include <iostream>


int main() {
	int temp{-1};
	int summary = 0;
	int n{0};
	std::cin >> temp;
	while(temp != 0) {
		if (temp % 2 == 0) {

			summary += temp;
		}
		n++;

	    std::cin >> temp;
	}
	std::cout << n << std::endl <<  summary;
	return 0;
}