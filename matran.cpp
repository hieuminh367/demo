# include <iostream>
using namespace std;

void nhapMang(int a[][100], int &dong, int &cot){
	for (int i = 0; i < dong; i++){
		for (int j = 0; j < cot; j++){
			cout << "nhap a[" << i <<"]" <<"[" << j <<"]" <<" ";
			cin >> a[i][j]; 
		} 
	}
} 

void xuatMang(int a[][100], int dong, int cot){
	for (int i = 0; i < dong; i++){
		for (int j = 0; j < cot; j++){
			cout << a[i][j] <<" ";
		}
		cout << endl;
	}
}

int tong(int a[][100], int dong, int cot){
	int s = 0;
	for (int i = 0; i < dong; i++){
		for (int j = 0; j < cot; j++){
			s += a[i][j];
		}
	}
	return s;
}

int Max(int a[][100], int dong, int cot){
	int max = a[0][0];
	for (int i = 0; i < dong; i++){
		for (int j = 0; j < cot; j++){
			if (a[i][j] > max){
				max = a[i][j];
			}
		}
	}
	return max;
}

int Min(int a[][100], int dong, int cot){
	int min = a[0][0];
	for (int i = 0; i < dong; i++){
		for (int j = 0; j < cot; j++){
			if (a[i][j] < min){
				min = a[i][j];
			}
		}
	}
	return min;
}

void tongDong(int a[][100], int dong, int cot){
	for (int i = 0; i < dong; i++){
		int s = 0;
		for (int j = 0; j < cot; j++){
			s += a[i][j];
		}
		cout <<"tong dong "<< i <<" "<< s << endl;
	}
}

void tongCot (int a[][100], int dong, int cot){
	for (int i = 0; i < cot; i++){
		int s = 0;
		for (int j = 0; j < dong; j++){
			s += a[j][i];
		}
		cout <<"tong cot "<< i <<" "<< s << endl;
	}
}

void maxDong (int a[][100], int dong, int cot){
	for (int i = 0; i < dong; i++){
		int max = a[i][0];
		for (int j = 0; j < cot; j++){
			if (a[i][j] > max){
				max = a[i][j];
			}
		}
		cout <<"gia tri lon nhat dong " << i <<" "<< max << endl;
	}
}

void tongDuongCheoChinh (int a[][100], int dong, int cot){
	int s = 0;
	if (dong != cot){
		cout <<"khong co duong cheo chinh";
	}
	else {
		for (int i = 0; i < dong; i++){
			for (int j = 0; j < cot; j++){
				if (i == j){
					s += a[i][j];
				}
			}
		}
		cout <<"tong duong cheo chinh "<<" "<< s;
	}
}

bool kiemTraSNT (int p){
	if (p < 2){
		return false;
	}
	for (int i = 2; i < p; i++){
		if (p % i == 0){
			return false;
		}
	}
	return true;
}

void tongSNT(int a[][100], int dong, int cot){
	int s = 0;
	for (int i = 0; i < dong; i++){
		for (int j = 0; j < cot; j++){
			if (kiemTraSNT(a[i][j])){
				s += a[i][j];
			}
		}
	}
	cout <<"\n tong cac so nguyen to trong mang "<<" "<< s;
}

void sapXep(int a[][100], int dong, int cot){
	for (int i = 0; i < dong; i++){
		for (int j = 0; j < cot; j++){
			for (int k = j + 1; k < cot; k++){
				if (a[i][j] < a[i][k]){
					int b  = a[i][k];
					a[i][k] = a[i][j];
					a[i][j] = b;
				}
			}
		}
	}
}


bool doiXung(int a[][100], int dong, int cot){
	if (dong != cot){
		return false;
	}
	if (dong == cot){
		for (int i = 0; i < dong; i++){
			for (int j = i + 1; j < cot; j++){
				if (a[i][j] != a[j][i]){
					return false;	
				}
			}
			
		}	
	}
	return true;
}
int main(){
	int dong, cot;
	cout <<"nhap so dong ";
	cin >> dong;
	cout <<"nhap so cot ";
	cin >> cot;
	int a[100][100];
	nhapMang(a, dong, cot);
	xuatMang(a, dong, cot);
	cout <<"\n tong cac phan tu trong mang "<< tong(a, dong, cot);
	cout <<"\n so lon nhat trong mang " << Max(a, dong, cot);
	cout <<"\n so nho nhat trong mang " << Min(a, dong, cot);
	cout << endl;
	tongDong(a, dong, cot);
	cout << endl; 
	tongCot(a, dong, cot);
	cout << endl;
	maxDong(a, dong, cot);
	cout << endl;
	if (doiXung(a, dong, cot) == true){
		cout <<"la ma tran doi xung";
	}
	if (doiXung(a, dong, cot) == false) {
		cout <<"khong la ma tran doi xung";
	}
	cout << endl;
	tongDuongCheoChinh(a, dong, cot);
	tongSNT(a, dong, cot);
	sapXep(a, dong, cot);
	cout << endl;
	xuatMang(a, dong, cot);
	return 0;
}
