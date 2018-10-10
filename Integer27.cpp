#include<iostream>
using namespace std;
int main() {
	int k;
	cin >> k;
	int y;
	y = (k - 2) % 7;
	if (k > 0 && k < 365) {
		if (k == 1) {
			cout << "suturday" << endl;
		}
		if (y == 0) {
			cout << "sunday" << endl;
		}
		if (y == 1) {
			cout << "monday" << endl;
		}
		if (y == 2) {
			cout << "tuesday" << endl;
		}
		if (y == 3) {
			cout << "wednesday" << endl;
		}
		if (y == 4) {
			cout << "thursday" << endl;
		}
		if (y == 5) {
			cout << "friday" << endl;
		}
		if (y == 6) {
			cout << "suturday" << endl;
		}
	}
	return 0;
}



