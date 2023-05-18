#include <iostream>


int main() {
	using namespace std;
	
	int n, temp, max{0};
	bool isFailed;
	cin >> n;
	for (int i{0};i < n; i++) {
		cin >> temp;
		if (temp == 0) {isFailed = 0;}
		if (temp > max) {max = temp;}
	}
	cout << max << endl;
	if (isFailed == 0) {cout << "YES";} else cout << "NO";
	return 0;
}