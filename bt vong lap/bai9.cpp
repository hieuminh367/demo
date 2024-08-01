#include <iostream>
using namespace std;

int main (){
	int n;
	cout << "nhap n:";
	cin >> n;
	int tong = 1;
	for(int i = 1;i <= n;i++){
		tong = tong * i;
	}
	cout << "Tong: " << tong;
}
