#include<iostream>
using namespace std;
int main() {
	int x, y, z;
	
	cin >> x >> y >> z;
	
	if (x < y && y < z && x>=1 && x<=9 && y >= 1 && y <= 9 && z >= 1 && z <= 9) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}
	return 0;
}