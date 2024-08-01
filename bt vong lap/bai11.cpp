# include <iostream>
using namespace std;
# include <math.h>
int main (){
	int n;
	float s = 0;
	cin >> n;
	for (float i = 1;i <= n;i++){
		s += 1 / pow(i,3);
	}
	cout << round(s * 100000) / 100000;
}
