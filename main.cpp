#include <iostream>


int main() {
	int n{0};
	int n_tmp;
	double summary {0};
	int temp;
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> temp;
		summary += temp;
		if (temp > 0)
		{
			n_tmp ++;
		}
	}
	summary = summary / n;
	std::cout << summary << std::endl;
	if (n_tmp >= 5) {
		std::cout << "YES";
	}
	else std::cout << "NO";
	return 0;
}