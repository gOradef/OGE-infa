#include <iostream>
#include <cmath>

int main() {
using namespace std;
	int temp{-1}, count{0};
	while(temp != 0) {
	    cin >> temp;
	    if (temp > 9 && temp < 100 && temp % 8 == 0) {count++;}
	}
	cout << count;
	return 0;
}