#include <iostream>
using namespace std;

int main (){
	float a,b,x;
	cout << "nhap a:";
	cin >> a;
	cout << "nhap b:";
	cin >> b;
	if (a == 0){
		cout << "phuong trinh vo nghiem" ;
	}
	else {
		x = -b/a;
		cout << "nghiem cua phuong trinh la:" << x ;
	}
}
