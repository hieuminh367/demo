# include <iostream>
using namespace std;

int main (){
	int n;
	cout << "nhap n:";
	cin >> n;
	for (int i = 1;i <= n;i++){
		//cout << "* ";
		for (int j = 1;j <= i;j++){
			cout << "* ";
		}
		cout << endl;
		
	}
}
