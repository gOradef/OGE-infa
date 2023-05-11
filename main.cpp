#include <iostream>


int main() {
	int temp{-1};
	int max {2};
	int n{0};
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> temp;
		if (temp % 10 == 2 && temp > max) {
			max = temp;
		}
	}
	std::cout << max;
	return 0;
}