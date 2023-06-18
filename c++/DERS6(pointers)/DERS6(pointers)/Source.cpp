#include<iostream>
//void ucaginYonBilgileriniHesapla(int *p) {
//	*p = 34;
//}
using namespace std;
int main() {
	// const int x=7 dersek x'i hic bi sekilde degistiremeyiz ileride..
	//int x = 7;
	//int *ptr;
	//ptr = &x;
	//cout << x << endl ; //op:7
	//cout << *ptr << endl; // op:7

	//*ptr = 8;
	//cout << "x'in yeni degeri : " << x << endl; // x= 8 olur..

	//ucaginYonBilgileriniHesapla(ptr);
	//cout << "x'in yeni degeri : " << x << endl;  //op:34..

	int x;
	cout << "Arrayin kac tam sayi icerecegini giriniz: ";
	cin >> x;
	int* p = new int[x];
	for (int i = 0;i < x;i++) {
		cin >> p[i];
	}
	int sum = 0;
	for (int i = 0; i < x;i++) {
		sum += p[i];
	}
	cout << "toplam: " << sum << endl;

	delete[] p;


	return 0;
	}