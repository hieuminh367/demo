# include <iostream>
# include <math.h>
using namespace std;

int main (){
	float x,n;
	float s = 0;
	float f = 1;
	cout <<"nhap x: ";
	cin >> x;
	cout <<"nhap n: ";
	cin >> n;
	for (float i = 1;i <= n;i++){
		f *= i;
		s += pow(x,i) / f;
	}
	cout << "S ="<< s;
}
