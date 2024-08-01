# include <iostream>
using namespace std;

int main (){
	int n;
	int s = 1;
	cout <<"nhap n: ";
	cin >>n;
	for (int i = 1;i <= n;i++){
		s *= i;
	}
	cout << "S ="<<s;
}
	
