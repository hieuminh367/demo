# include <iostream>
using namespace std;

int main (){
	int n;
	int c = n % 100;
	cout << "nhap n:";
	cin >> n;
	for (n;n > 0;n++){
		if (n % 400 ==0 || n % 4 == 0 && c > 0){
			cout << "la nam nhuan";
		}
		else {
			cout << "khong phai nam nhuan";
		}
		break;
	}
	
}
