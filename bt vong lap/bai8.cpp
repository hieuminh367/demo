# include <iostream>
using namespace std;

int main (){
	int n;
	int a = 1;
	int b = 1;
	int c = 0;
	cout <<"nhap n: ";
	cin >> n;
	for(int i = 1;i <= n;i++){
		c = a + b;
		cout << c << " " ;
		a = b;
		b = c;
	}
}
