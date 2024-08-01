#include <iostream>
using namespace std;

int main (){
	float n;
	float s = 1;
	float f = 0;
	cout << "nhap n: ";
	cin >> n;
	for(int i = 1;i <= n;i++){
		s *= i;
		f += s;
	}
	cout << "S ="<<f;
}
