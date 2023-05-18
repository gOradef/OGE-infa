#include <iostream>


int main() {
	using namespace std;
	
	int n, temp, count;
	cin >> n;
	for (int i{0}; i < n; i++) {
		cin >> temp;
		if (temp % 10 == 8 && temp % 6 == 0 ) {count++;}
	}
	cout << count;
	return 0;
}