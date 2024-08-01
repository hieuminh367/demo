# include <iostream>
using namespace std;

int main (){
	int n;
	do{
		cout <<"nhap n:";
		cin >> n;
		if (n < 3 || n > 50){
			cout <<"n khong hop le hay nhap lai";
		}
		cout << endl;
	}while (n < 3 || n > 50);
	int a[n];
	for (int i = 0;i < n;i++){
		cout <<"nhap phan tu thu " << i + 1 <<":";
		cin >> a[i];
	}
	int x;
	cout <<"nhap x: ";
	cin >> x;
	int s = 0;
	for (int i = 0;i < n;i++){
		if (a[i] < x){
			s += 1;
		}
	} 
	cout << s;
	cout << endl;
	int tong = 0;
	int m = 0;
	bool chia5 = false;
	for (int i = 0;i < n;i++){
		if (a[i] % 5 == 0){
			chia5 = true;
		}
		for(int i = 0;i < n;i++){
			if (a[i] % 3 == 0 && chia5 == false){
				tong += a[i];
			}
			if (a[i] % 3 == 0 && chia5 == false){
				m += 1;
			}
		} 
	}
	cout <<(float) tong / m;
	bool TangGiam = false;
	for(int l = 0;l < n;l++){
		int b;
		for(int i = 0;i < n;i++){
			for (int j = i + 1;j < n;j++){
				if (a[i] < a[j]){
					b = a[j];
					a[j] = a[i];
					a[i] =b;
				}
			}
		}
		
	}
	cout << endl;
	if (TangGiam == true){
		cout << "YES";
	}
	else{
		cout <<"NO";
	}
	
	
	
	return 0;
}
