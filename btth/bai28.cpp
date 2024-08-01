# include <iostream>
using namespace std;

int main (){
	int n;
	int s = 1;
	cout <<"nhap n: ";
	cin >> n;
	while (n > 0){
		int b = n % 10;
		if (n % 2 == 1){
			s *= b;
		}
		n = n / 10;
	}
	cout <<"S =" << s;
}

