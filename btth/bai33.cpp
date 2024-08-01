# include <iostream>
using namespace std;

int main (){
	int n;
	cout << "nhap n: ";
	cin >> n;
	while (n > 0){
		int b = n % 10;
		if (b % 2 == 1){
			cout << "toan la so le";
		}
		else{
			cout <<"khong toan la so le";
		}
		break;
		n = n / 10;
	}
}
