# include <iostream>
using namespace std;

int main(){
	float a, b , c;
	cin >> a >> b >> c;
	if ( a > b && a > c){
		cout << "max = " << a;
	}
	if ( b > a && b>c){
		cout << "max = " << b;
	}
	if( c >a &&c> b){
		cout << "max = " << c;
	}
	
   
}
