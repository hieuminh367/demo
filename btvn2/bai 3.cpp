# include <iostream>
using namespace std;
# include <math.h>
int main (){
	float x,a,b,c;
	cout << "nhap a:";	
	cin >> a;
	cout << "nhap b:";
	cin >> b;
	cout << "nhap c:";
	cin >> c;
	if (a == 0){
		cout << "khong phai phuong trinh bac 2";
	}
	else {
		float n = b * b - 4 * a * c;
		if ( n < 0){
			cout << "phuong trinh vo nghiem";
			//break;
		}
		if (n == 0){
			cout << "phuong trinh co nghiem kep :" << - b / (2 * a);
			//break;
		}
		if ( n > 0) {
			cout << "phuong trinh co 2 nghiem :" << (- b + sqrt (n) ) / (2 * a) << " va " << (- b - sqrt(n)) / (2 * a);
		}
	}
}
