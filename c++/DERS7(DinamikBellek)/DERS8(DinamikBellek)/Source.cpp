#include<iostream>
using namespace std;

int main() {
	/*int* ptr;
	int a[] = { 1,2,3,4,5 };
	ptr = a;
	cout << ptr[1] << endl;*/

	/*int* ptr=new int;
	*ptr = 5;
	delete ptr; *///alaný tekrar kullanmak icin silinir

	//ekle sil
	/*int* ptr;
	int size;
	cout << "kac deger saklayacaksiniz ";
	cin >> size;
	ptr = new int[size];
	for (int i = 0;i < size;i++) {
		cout << "deger :";
		cin >> ptr[i];
	}
	for (int i = 0;i < size;i++) {
		cout << "eleman :" << ptr[i] << endl;
	}
	delete[] ptr;*/

	//null pointer,dangling referans,pointerlar

	//dangling silindikten sonra gösterilemeyen geçersiz alandýr.


	return 0;
}