# include <iostream>
using namespace std;

int main (){
	int n;
	int tong;
	//int c = 0;
	cout << "nhap n:";
	cin >> n;
	for (int i = 1;i <= n;i++){
		tong = tong + i;
	}
	cout << "Tong: " << tong;
	
}
