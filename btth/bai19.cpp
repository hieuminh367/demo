# include <iostream>
# include <math.h>
using namespace std;
int main (){
	float a = sqrt(2);
	int n;
	cout <<"nhap n: ";
	cin >> n;
	for (int i = 1;i <= n;i++){
		a = sqrt(a + 2);
	}
	cout << "S ="<< a;
 }
