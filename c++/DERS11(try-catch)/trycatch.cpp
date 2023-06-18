#include<iostream>
#include<iomanip>
using namespace std;

//expection in fuctions...
/*int divide(int x) throw (const char *){
	if(x<0) throw "negartive number is entered";
	else return 10/x;
}
*/


//exception in class

/* class divByZero{
	string msg;
	public:
		divByZero(string t):msg(t){}
		string getmsg(){return msg;
		}
};
double divide(double a,double b){
	if(b==0) throw (divByZero("Divide by Zero"));
	else return a/b;
} */

//example..!
/*  class TimeException{
	int hour,min;
	public:
		TimeException(int a,int b):hour(a),min(b) {}
		int getmin(){return min;}
		int gethour(){return hour;}
};
*/




	int main(){
		
	/*	int x;
		try{
			cout<<"enter a positive number: ";
			cin>>x;
			if(x<0)
			throw "negative number is entered!";
			else 
			cout<<10/x<<endl;
		}
		catch(...){
			cerr<<"error"<<endl;
		}
		cout<<"Continue execution";*/
		
		
		
	/*	int arr[4]={2,4,6,8};
		int ind;
		try{
			cout<<"enter an index between 0-3: ";
			cin>>ind;
			if(ind<0 || ind>3) throw ind;
			else cout<<"Array element: "<<arr[ind]<<endl;
		}
		catch(int i){
			cout<<"Invalid index: "<<i<<endl;
			cout<<"Bye!";
		} */
		
		
	/*	int arr [4]={2,4,6,8};
		int x;
		try{
			cout<<"enter a positive number: ";
			cin>>x;
			if(x<0) throw "Negative number is entered ";
			else cout<<10/x<<endl;
			if(x<0||x>3) throw x;
			else cout<<"Array element: " <<arr[x]<<endl;
		}
		catch(int i){
			cout<<"Invalid index: "<<i<<endl;
		}
		catch(const char *s){
			cout<<s<<endl;
			cout<<"Continue execution";
		} */
		
		//expection in fuctions
		
	/*	int x;
		try{
			cout<<"enter a positive number: ";
			cin>>x;
			cout<<divide(x)<<endl;
		}
		catch(const char *s){
			cout<<s<<endl;
			cout<<"continue execution";
		}
		*/
		
		//exception in class
	/*	double a,b;
		try{
			cout<<"enter two number: ";
			cin>>a>>b;
			cout<<divide(a,b);
		}
		catch(divByZero &err){
			cout<<"exception: "<<err.getmsg();
		} */
		
		//example..!
	/*	int h,m,h12;
		char ch;
		do{
		cout<<"Enter time in 24-hour notation: ";cin>>h>>m;
		try{
			if(h>0&&h<24 && m>0 && m<60){
				cout<<"same time in 12-hour notation: ";
				h12=h%12;
				cout.fill('0');
				cout<<h12<<":"<<setw(2)<<m;
				if(h>12) cout<<"PM"<<endl;
				else cout<<"AM"<<endl;
			}
			else 
			throw(TimeException(h,m));
		}
			catch(TimeException &err){
				cout<<"There is no such time as ";
				cout<<err.gethour()<<":"<<err.getmin()<<endl; } 
				cout<<"Continue? (Y/N): "; cin>>ch;
		}while(ch!='N');
		cout<<"Bye..";
	*/

	
		return 0;
	}
