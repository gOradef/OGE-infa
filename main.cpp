#include <iostream>


int main() {
using namespace std;
	int temp{-1}, summary;
	while (temp != 0) {
		if (temp % 5 == 0 || temp % 9 == 0) {summary ++;}
		cin >> temp;
	}	
	cout << summary;
	return 0;
}