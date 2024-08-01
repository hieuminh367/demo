# include <iostream>
using namespace std;

int main (){
	int n;
	int s = 0;
	cout <<"nhap n: ";
	cin >> n;
	while (n > 0){
		int b = n % 10;
		s = s * 10 + b * 10;
		n = n / 10;
	}
	cout << "so dao nguoc: " << s / 10 ;
}
