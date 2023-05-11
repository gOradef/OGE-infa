#include <iostream>


int main() {
	int temp;
	int sum{0};
	std::cin >> temp;
	while(temp != 0) {
		if (temp % 3 == 0 && temp % 10 == 8) {

			sum += temp;
		}
	    std::cin >> temp;
	}
	std::cout << sum;
	return 0;
}