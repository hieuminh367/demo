# include <iostream>
using namespace std;

int main (){
	int n;
	cout << "so tien: ";
	cin >> n;
	if (n >= 0 && n < 200){
		cout << "so tien phai tra: " << n;
	}
	if (n >= 200 && n <= 300){
		cout << "so tien phai tra: " << n * 80 / 100; 
	}
	if (n > 300){
		cout << "so tien phai tra: " << n * 70 / 100;
	}
}
