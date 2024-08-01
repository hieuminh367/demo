# include <iostream>
using namespace std;

int main (){
	int n;
	int max = 0;
	cout <<"nhap n: ";
	cin >> n;
	for (int i = n; i > 0;i--){
		if (n % i == 0 && i % 2 == 1){
			if (i > max){
				max = i;
				cout << i;
			}
		}
	}
/*	bool le = true;
	for (int i = 1;i < n;i++){
		bool le = true;
		if (i % 2 == 0){
			le = false;
		}
		if (n % i == 0 && le == true){
			if (max < n){
				
			
			}
		}
	}*/
}

