#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if (a + b > c && b + c > a && a + c > b) {
		if(a>0 && b>0 && c>0){
			cout << "yes" << endl; }
	}
	else {
		cout << "no" << endl;
	}
	return 0;
}
