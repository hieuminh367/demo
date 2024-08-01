# include <iostream>
using namespace std;

int main (){
	int n;
	cout <<"nhap tien luong : ";
	cin >> n;
	if (n < 3000000 && n > 0){
		cout << "so tien luong la: " << n * 95 / 100;
	}
	if (n >= 3000000 && n < 6000000){
		cout << "so tien luong la: " << n * 90 / 100;
	}
	if (n >= 6000000 && n < 10000000){
		cout << "so tien luong la :" << n * 85 / 100;
	}
	if (n >= 10000000){
		cout << "so tien luong la: " << n * 75 / 100;
	}
}
