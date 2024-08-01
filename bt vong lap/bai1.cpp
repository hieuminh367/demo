# include <iostream>
using namespace std;

int main (){
	int n;
	cout << "nhap n:";
	cin >> n;
	for (int i = 0;i < n;i++){
		for (int j = 1;j < n;j++){
			if (j = i - 1){
				cout << " ";
			}else {
				cout << "* ";
			}
		//	cout << "* ";
		}
		cout << endl;
		
	}
}
