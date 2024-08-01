#include <iostream>
using namespace std;
	
int main (){
	float n;
	float s = 0;
	cout << "nhap n: ";
	cin >> n;
	for(float i = 1;i <= n;i++){
		s += 1 / i;
	}
	cout << "S =" << s;
}	
