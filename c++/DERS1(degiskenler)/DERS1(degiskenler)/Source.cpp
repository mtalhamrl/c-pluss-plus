#include <iostream>

using namespace std;

int main() {
	string isim = "Veli";
	int yas = 20;
	// yas=21;
	// isim = "Veli";
	int not1 = 70;
	int not2 = 80;
	char notOrtalaması = 'A';
	float sayisalOrt = 3.25;
	bool sınavaGirdiMi = true;

	int sinavlarOrtalamasi = (not1 + not2) / 2;
	cout << sinavlarOrtalamasi << endl;


	/*Ekrana yazdirma islemleri
	cout << "merhaba" << endl << "Ogrenci adi - soyadi : " << isim   << endl;
	cout << "ogrenci yasi : " << yas << endl;
	cout << "Not ortalaması : " << notOrtalaması << endl;
	cout << "sayisal not ort : " << sayisalOrt << endl; 
	cout << "Ogrenci sinava girdi mi: " << sınavaGirdiMi << endl;
	cout << endl;*/
	 
	return 0;
}