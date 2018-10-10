#include<iostream>
using namespace std;
int main() {
	int x, y, z;
	cin >> x>>y>>z;
	if(x>0 && x<10 && y>0 && y < 10 && z >= 0 && z < 10){
		cout << y << x << z;
	}
	
		return 0;
	}