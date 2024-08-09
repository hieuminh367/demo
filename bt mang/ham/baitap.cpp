# include <iostream>
using namespace std;

void nhapMang (int a[], int &n){
	cout <<"nhap n: " <<" ";
	cin >> n;
	for (int i = 0; i < n; i++){
		cout <<"nhap phan tu thu " << i + 1 <<":";
		cin >> a[i];
	}
}
void xuatMang (int a[], int n){
	for (int i = 0; i < n; i++){
		cout << a[i] <<" ";
		
	}
}
int tong (int a[], int n){
	int s = 0;
	for (int i = 0; i < n; i++){
		s += a[i];
	}
	return s;
}
void daoNguocMang (int a[], int n){
	int b = 0;
	int c = n - 1;
	while (b < c){
		int i = a[b];
		a[b] = a[c];
		a[c] = i;
		b ++;
		c--;
	}
}
int Max (int a[], int &n){
	for(int i = 0; i < n; i++){
		int max = a[0];
		if(max < a[i]){
			max = a[i];
			return max;
		}
	}
}
int Min (int a[], int &n){
	for (int i = 0; i < n; i++){
		int min = a[0];
		if (a[i] < min){
			min = a[i];
			return min;
		}
	}
}
bool kiemTraSNT (int x){
	if (x < 2){
		return false;
	}
	for (int i = 2; i < x; i++){
		if (x % i  == 0){
			return false;
			break;
		}
	}
	return true;
}
void inRaSNT (int a[], int n){
	for (int i = 0; i <  n; i++){
		if (kiemTraSNT(a[i])){
			cout << a[i] <<" ";
		}
	}
}
void soLonNhi (int a[], int n){
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			if (a[i] < a[j]){
				int b = a[j];
				a[j] = a[i];
				a[i] = b;
			}
		}
	}
	cout <<a[1];
}
void soLanXuatHien(int a[], int n, int p){
	cout << "\n nhap so can kiem tra";
	cin >> p;
	int s = 0;
	for (int i = 0; i < n; i++){
		if (a[i] == p){
			s++;
		}
	}
	cout << s;
}
void sapXepMang (int a[], int n){
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			if (a[i] < a[j]){
				int b = a[j];
				a[j] = a[i];
				a[i] = b;
			}
		}
	}
	cout << endl;
}
void chen (int a[], int &n, int m, int k){
	cout <<"nhap so can chen";
	cin >> m;
	cout <<"nhap vi tri can chen";
	cin >> k;
	n++;
	for (int i = n - 1; i > k; i--){
		a[i] = a[i - 1];	
	}
	a[k] = m;
}
void khongTrungLap (int a[], int n){
	bool trungLap = false;
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			if (a[i] == a[j]){
				trungLap = true;
				break; 
			}
		}
		if (trungLap == false){
			cout << a[i] <<" ";
		}
	}
}
void xoaPT (int a[], int n, int p){
	for (int i = p; i < n; i++){
		a[i] = a[i + 1];
	}
	n--;
}
void xoaPTtrungLap (int a[], int n, int p){
	for (int i = 0; i < n;i++){
		for (int j = i + 1; j < n; j++){
			if (a[i] == a[j])
			xoaPT(a, n, p);
		}
	}
}
int main (){
	int a[100];
	int mang[100];
	int n;
	int s;
	int p, m, k;
	nhapMang(a, n);
	xuatMang(a, n);
	cout <<"\n tong cac phan tu" <<" ";
	s = tong (a, n);
	cout << s;	
	cout <<"\n mang dao nguoc" << " ";
	daoNguocMang(a, n);
	xuatMang(a, n);
	cout <<"\n gia tri lon nhat: ";
	int b = Max(a, n);
	cout << b;
	cout <<"\n gia tri nho nhat: ";
	int c = Min(a, n);
	cout << c;
	cout <<"\n cac so nguyen to" <<" :";
	inRaSNT(a, n);
	cout <<"\n so lon thu hai ";
	soLonNhi(a, n);
	cout <<"\n kiem tra so lan xuat hien";
	soLanXuatHien (a, n, p);
	sapXepMang(a, n);
	xuatMang(a, n);
	chen(a, n, m, k);
	xuatMang(a, n);
	cout<<"\n so khong trung lap la:";
	khongTrungLap(a, n);
	cout <<"\n mang sau khi xoa";
	xoaPTtrungLap(a, n, p);
	xuatMang(a, n);
	
	
	
	
	
	
	
	return 0;
}
