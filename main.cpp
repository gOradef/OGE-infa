#include <iostream>


int main() {
	int temp{-1};
	int summary = 0;
	std::cin >> temp;
	while(temp != 0) {
		if (temp % 2 == 0 && temp % 5 == 0) {

			summary++;
		}
	    std::cin >> temp;
	}
	std::cout << summary;
	return 0;
}