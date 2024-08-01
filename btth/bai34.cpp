# include <iostream>
using namespace std;

int main (){
	int n;
	cout << "nhap n: ";
	cin >> n;
	while (n > 0){
		int b = n % 10;
		if (b % 2 == 0){
			cout <<"toan la so chan";
		}
		else{
			cout <<"khong toan la so chan";
		}
		break;
		n = n / 10;
		
	}
}
