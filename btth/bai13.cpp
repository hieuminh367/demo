# include <iostream>
using namespace std;
# include <math.h>
int main (){
	float x,n;
	float s = 0;
	cout << "nhap x :";
	cin >> x;
	cout << "nhap n :";
	cin >> n;
	for (int i = 1;i <= n;i++){
		s += pow(x,2 * i);
	}
	cout << "S =" <<s; 
		
}
