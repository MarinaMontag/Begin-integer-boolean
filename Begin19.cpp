#include<iostream>;
using namespace std;
int main() {
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int a = x2 - x1; int b = y1 - y2;
	cout << "P=2(a+b)="<<2*(a+b)<< endl;
	cout << "S=ab="<<a*b << endl;
	return 0;
	}