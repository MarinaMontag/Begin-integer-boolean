#include<iostream>
using namespace std;
int main() {
	int A, B;
	cin >> A >> B; 
	if (A%2!=0) {
		cout << "yes" << endl;
	}else if (B % 2!=0) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}
	return 0;
}
