# include <iostream>
using namespace std;

int main (){
	float n;
	int s = 0;
	cout << "nhap n: ";
	cin >> n;
	for (int i = 1;i <= n;i++){
		//int s = 0;
		s += i;
	}
	cout << "S = " << s;
}
