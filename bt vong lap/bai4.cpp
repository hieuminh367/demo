# include <iostream>
using namespace std;
 int main (){
 	int n;
 	cout << "nhap n:";
 	cin >> n;
 	if (n < 2){
 		cout << "khong phai so nguyen to";
	 }
 	for (int i = 2;i < n;i++){
 		if (n % i == 0){
 			cout << "khong phai so nguyen";
 			break;
		 }
		 else {
		 	cout << "la so nguyen";
		 	break;
		 }
		// break;
	 }
 }
	
