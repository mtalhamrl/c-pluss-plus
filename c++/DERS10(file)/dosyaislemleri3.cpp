#include<iostream>
#include<fstream>
#include<string>
using namespace std;

	int main(){
		
	fstream stu;
	stu.open("avg.txt",ios::in);
	string name;
	int grade,sum=0,count=0;
	stu>>name>>grade;
	while(getline(stu,name)){
		sum+=grade;
		count++;
		stu>>name>>grade;
	}
	cout<<"Avarage: "<<sum/count;
	stu.close();
	return 0; }
