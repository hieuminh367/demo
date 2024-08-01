# include <iostream>
# include <math.h>
using namespace std;

int main (){
	int n;
	cin >> n;
	for (int i = 1;i <= n;i++){
		for(int j = 0;j < n - i;i++){
			cout << "  ";
		}
		for (int j = 0;j < n;i++){
			cout <<"* ";
		}
		cout << endl;
	
	}
}
