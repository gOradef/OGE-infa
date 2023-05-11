#include <iostream>


int main() {
	int temp;
	int sum{0};
	std::cin >> temp;
	while(temp != 0) {
		if (temp % 7 == 0 && temp % 10 == 3) {

			sum += temp;
		}
	    std::cin >> temp;
	}
	std::cout << sum;
	return 0;
}