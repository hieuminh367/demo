# include <iostream>
using namespace std;

int main (){
	int n;
	do{
		cout <<"nhap n: ";
		cin >> n;
		if (n < 3 || n > 50){
			cout <<"n khong hop le hay nhap lai";
		}	
		cout << endl;
	}while (n < 3 || n > 50);
	int a[n];
	for (int i = 0;i < n;i++){
		cout << "nhap so phan tu thu " << i + 1 <<" ";
		cin >> a[i];
	}
	bool c = false;
	for (int i = 0;i < n;i++){
		if (a[i] % 2 == 0 && a[i + 1] % 2 == 0){
			c = true;
		}
	}
	if (c == true){
		cout << "YES";
	}
	else {
		cout <<"NO";
	}
	cout << "\n tach mang";
	bool b = false;
	for (int i = 0;i < n;i++){
		if (a[i] == 0){
			b = true;
		}
	}	
	cout << endl;
	if (b == true){
		cout << "-1";
	}
	if (b == false){
		for (int i = 0;i < n;i++){
			if (a[i] % 2 == 0){
				cout << a[i] << " ";
			}
		}
		cout << "-";
		for (int i = 0;i < n;i++){
			if (a[i] % 2 == 1){
				cout << a[i] << " ";
			}
		}
	}
	int m;
	cout << "\n mang giam dan";
	cout << endl;
	for (int i = 0;i < n;i++){
		for (int j = i + 1;j < n;j++){
			if (a[i] < a[j]){
				m = a[j];
				a[j] = a[i];
				a[i] = m;
			}	
		}
	}
	for (int i = 0;i < n;i++){
		cout << a[i] << " ";
	}

	
	
	
	return 0;
}
