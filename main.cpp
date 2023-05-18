#include <iostream>


int main() {
	using namespace std;

	int n, temp, max {0};
	bool isNoncorrect;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		if (temp == 0) {isNoncorrect = 1;}
		if (temp > max) {max = temp;}
	}
	cout << max << endl;
	if (isNoncorrect == 1) {cout << "YES";} else cout << "NO";
	return 0;
}