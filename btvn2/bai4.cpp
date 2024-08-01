# include <iostream>
using namespace std;

int main (){
	float n;
	cout << "nhap so dien:";
	cin >> n;
	float a = n * 750;
	float b = 100 * 750 + (n - 100) * 1250;
	float c = 100 * 750 + 100 * 1250 + (n - 200) * 1750;
	float d = 100 * 750 + 100 * 1250 + 100 * 1750 + (n - 300) * 3000;
	if ( n <= 100){
		cout << "so tien:" << a;
	}
	if (n > 100 && n <= 200){
		cout << "so tien: " << b;
	}
	if (n > 200 && n <= 300){
		cout << "so tien: " << c;
	}
	if (n >300){
		cout <<"so tien:" << d;
	}
	
	
}

