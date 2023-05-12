#include <iostream>
#include <cmath>

int main() {
using namespace std;
	int temp{-1}, num_counter;
	double summary {0};
	while (temp != 0) {
		if (temp % 8 == 0) {summary += temp; num_counter++;}
		cin >> temp;
	}	
	summary = summary / num_counter;
	if (summary == 0) {cout << "NO";} else cout << round(summary*10)/10;
	return 0;
}