# include <iostream>
using namespace std;

int main (){
	int n;
	int s = 0;
	cout << "nhap n: ";
	cin >> n;
	while (n > 0){
		float b = n % 10;
		s += b;
		n = n / 10;
		//cout << s;
	}cout << "S =" << s;
}
