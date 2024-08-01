# include <iostream>
using namespace std;

int main (){
	int n;
	do{
		cout <<"nhap n" << " ";
		cin >> n;
		if (n < 3 || n > 50){
			cout <<"n khong hop le hay nhap lai";
		}
		cout << endl;
	}while (n < 3 || n > 50);
	float a[n];
	for (int i = 0;i < n;i++){
		cout <<"nhap phan tu thu " << i + 1 << " ";
		cin >> a[i];
	}
	bool NgChan = false;
	float tong = 0;
	float s =0;
	for (int i = 0;i < n;i++){
		if ((int) a[i] % 2 == 0){
			NgChan = true;
		}
	}
	if (NgChan == false){
		cout <<"-1";
	}
	if (NgChan == true){
		for (int i = 0;i < n;i++){
			if ((int) a[i] % 2 == 0 ){
				tong += a[i];
			}
			if ((int) a[i] % 2 == 0){
				s += 1;
			}
		}
		cout << tong / s;
	}
	cout <<"\n mang tang dan" << " ";
	float b;
	for (int i = 0;i < n;i++){
		for (int j = i + 1;j < n;j++){
			if(a[i] > a[j]){
				b = a[j];
				a[j] = a[i];
				a[i] = b;
			}
		}
	}
	for (int i = 0;i < n;i++){
		cout << a[i] << " ";
	}
	cout << "\n mang sau khi thay doi" << " ";
	for (int i = 0;i < n;i++){
		if ((int) a[i] % 2 == 1){
			a[i] = 1.23;
		} 	
	}
	for (int i = 0;i < n;i++){
		cout << a[i] << " ";
	}
	
	return 0;
}
