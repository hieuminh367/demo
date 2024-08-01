# include <iostream>
using namespace std;

int main (){
	int n;
	cout <<"nhap n: ";
	cin >> n;
	int a[n];
	for(int i = 0;i < n;i++){
		cout <<"nhap phan tu thu " << i + 1 << " :";
		cin >> a[i];
	}
	for (int i = 0;i < n;i++){
		cout << a[i] <<" ";
	}
	int s = 0;
	for (int i = 0;i < n;i++){
		s += a[i];
	}
	cout << "\n trung binh cong = " << s / n;
	cout << "\n mang dao nguoc ";
	for (int j = n - 1;j >= 0;j--){
		cout << a[j] << " ";		
	}
	int max = 0;
	for (int i = 0; i < n;i++){
		if ( a[i] > max){
			max = a[i];
		}
	}
	cout << "\n gia tri lon nhat " << max;
	int min = a[0];
	for (int i = 1;i < n;i++){
		if (a[i] < min){
			min = a[i];
		}
	}
	cout <<"\n gia tri nho nhat " << min;
	cout << "\n so nguyen to" << " ";
//	bool snt = true;
	for (int i = 0;i < n;i++){
		bool snt = true;
		if (a[i] < 2){
			snt = false;
		}
		for (int j = 2;j < a[i];j++){
			if (a[i] % j == 0){
				snt = false;
			}
		}
		if (snt == true){
			cout << a[i] << " ";
		}
	}
	cout <<"\n mang tang dan";
	int b;
	for (int i = 0;i < n;i++){
		for (int j = i + 1;j < n;j++){
			if (a[i] > a[j]){ // 5 9 10
				b = a[i];
				a[i] = a[j];
				a[j] = b;
			}
		}
	}
	cout << endl;
	for (int i = 0;i < n;i++){
		cout << a[i] << " ";
	}
	int m;
	cout <<"\n nhap vao so can kiem tra " << " ";
	cin >> m;
	int e = 0;
	for(int i = 0;i < n;i++){
		if (a[i] = m){
			e += 1;
		}
	}
	cout << e;
	
	
		
	
	

	
	
	
	
	
	
	return 0;
}
