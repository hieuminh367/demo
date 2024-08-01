# include <iostream>
# include <math.h>
using namespace std;

int main  (){
	int n;
	float a = 0;
	cin >> n;
	for (int i = n;i > 0;i--){
		a =  sqrt(a + i);
	}
	cout <<"S ="<< a;
}
