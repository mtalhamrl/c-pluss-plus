#include<iostream>
#include<fstream>
#include<string>
using namespace std;

	int main(){
		
	fstream FirstFile;
	FirstFile.open("pos.txt",ios::out|ios::binary);
	int x;
	for(int i=0;i<6;i++){
		cin>>x;
		if(x>0)
		FirstFile<<x<<endl;
	}
	FirstFile.close();
	return 0;
}
