#include <iostream>


int main() {
	using namespace std;
	
	int n, temp, sum{0};
	cin >> n;
	for (int i{0}; i < n; i++) {
		cin >> temp;
		if (temp % 10 == 4 && temp % 6 == 0 ) {sum += temp;}
	}
	cout << sum;
	return 0;
}