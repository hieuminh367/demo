#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "nhap n:";
	cin >> n;
	for (int i = 1;i <= n;i++){
		bool so = true;
		if (i < 2){
			so = false;
		}
		for (int j = 2;j < i;j++){
			if (i % j == 0){
				so = false;
				//break;
			}
		}
		if (so){
			cout << i << " ";
		}
	}
	
	
}
	
