#include <iostream>
#include <cmath>

int main() {
using namespace std;
	int n, temp, max {30000};
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		if (temp % 10 == 4 && temp < max) {max = temp;}
	}
	cout << max;
	return 0;
}