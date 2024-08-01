# include <iostream>
using namespace std;
# include <cmath>

int main(){
	float a,b,c;
	cin >> a >> b >> c;
	if (a + b > c || a + c > b || b + c > a){
		if (a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a){
			cout << "tam giac vuong";
		}	
		if ( a == b || a == c|| c == b ){
			cout << "tam giac can";
		}
		if (((a * a + b * b - c * c)/(2 * a * b)) < 0 && ((a * a + c * c - b * b)/(2 * a * c)) < 0 && ((c * c + b * b - a * a)/(2 * c * b)) < 0 ) {
			cout << "tam giac ngon";
		}
		else {
			cout << "tam giac thuong";
		}
	}
	else {
		cout << "ko phai tam giac";
	}	
			
		       
		
	
}
