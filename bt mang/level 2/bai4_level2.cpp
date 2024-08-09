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
	int a[n];
	for (int i = 0;i < n;i++){
		cout <<"nhap phan tu thu " << i + 1 << ":" ;
		cin >> a[i];
	}
	for (int i = 0;i < n;i++){
		if (a[i] % 2 == 0){
			while(a[i] % 2 == 0){
				a[i] = a[i] / 2;
			}
		}
	}
	for (int i = 0;i < n;i++){
		cout << a[i] << " ";
	}
	
	return 0;
}
