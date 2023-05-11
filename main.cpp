#include <iostream>


int main() {
	int temp{-1};
	int summary = 0;
	std::cin >> temp;
	while(temp != 0) {
		if (temp % 6 == 0 && temp % 10 == 6) {

			summary += temp;
		}
	    std::cin >> temp;
	}
	std::cout << summary;
	return 0;
}