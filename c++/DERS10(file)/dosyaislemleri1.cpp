#include<iostream>
#include<fstream>
#include<string>
using namespace std;

	int main(){
		
	fstream file;
	file.open("dosyaAdi.txt",ios::in | ios::binary | ios::app| ios::out);
		if(!file.is_open())
		{
			cout<<"dosya açýlamadý";
		}
		else {
			string str;
			while(getline(file,str)){	
			cout<<str<<endl;
			}
			file.close();

		}
		
		return 0;
	}

