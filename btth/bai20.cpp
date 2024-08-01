# include <iostream>
# include <math.h>
using namespace std;

int main (){
	int n;
	float s = sqrt(1);
	cin >> n;
	for (int i = 2;i <= n;i++){
		s = sqrt(s + i);
	}
	cout <<"S ="<< s;
}
