# include <iostream>
using namespace std;
# include <math.h>
 # define e 2.71828
int main (){
	float x;
	cout << "nhap x: ";
	cin >> x;
	float n = (pow(x,2) + pow(e,abs(x)) +pow(sin(x),2)) / (pow(x,3));
	cout << n;
}

