# include <iostream>
using namespace std;
# include <math.h>

int main (){
	int n;
	int s = 0;
	cout << "nhap n: ";
	cin >> n;
	for (int i = 1;i <= n;i++){
		s += pow(i,2);
	}
	cout << "S =" << s;	
}
