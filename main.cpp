#include <iostream>
#include <cmath>

int main() {
using namespace std;
	int n, temp, max {0};
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		if (temp % 5 == 0 && temp > max) {max = temp;}
	}
	cout << max;
	return 0;
}