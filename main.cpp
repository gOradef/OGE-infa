#include <iostream>


int main() {
	using namespace std;
	
	int temp{-1}, count{0}; 
	double summary;
	while(temp != 0) {
	    if (temp % 8 == 0) {summary += temp; count ++;}
	    cin >> temp;
	}
	summary = summary / count;
	if (count == 0) {cout << "NO";} else cout << summary;
	return 0;
}