# include <iostream>
using namespace std;
# include <math.h>
int main (){
	float x,n;
	float s = 0;
	cout <<"nhap x: ";
	cin >>x;
	cout <<"nhap n: ";
	cin >>n;
	for (int i = 0;i <= n;i++){
		s += pow(x,2 * i + 1);
	}
	cout << "S = "<<s;
}
