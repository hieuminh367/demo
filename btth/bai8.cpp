#include <iostream>
using namespace std;

int main (){
	float n;
	float s = 0;
	cout << "nhap n: ";
	cin >> n;
	for (float i = 0;i <= n;i++){
		s += (2 * i + 1) / (2 * i + 2);
	}
	cout << "S =" <<s;
}
