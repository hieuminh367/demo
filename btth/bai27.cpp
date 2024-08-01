# include <iostream>
using namespace std;

int main (){
	int n;
	int s = 0;
	cout <<"nhap n: ";
	cin >> n;
	while(n > 0){
		int b = n % 10;
		if (b % 2 == 0){
			s += b;
		}
		n = n / 10;
	}
	cout <<"S =" << s;
}
