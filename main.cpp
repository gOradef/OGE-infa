#include <iostream>


int main() {
	int n, temp, countProb{0};
	bool isPerfect;

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> temp;
		if (temp == 10) {isPerfect = true;}
		if (temp < 5) {countProb ++;}
	}
	std::cout << countProb << std::endl;
	if (isPerfect == 1)
	{
		std::cout << "YES";
	}
	else {std::cout << "NO";}
	return 0;
}