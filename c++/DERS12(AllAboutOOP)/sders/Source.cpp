#include<iostream>
using namespace std;
//int sum(int x, int y) {
//	return x + y;
//}
// 
// 
//void f(int a, int& b) {
//	a = 7;
//	b = 8;
//}
// 
// 
//class Rectangle {
//	int widht, length;
//public:
//	Rectangle(int a, int b) {
//		widht = a;
//		length = b;
//	}
//	int area() {
//		return widht * length;
//	}
//};

//class R {
//	int i;
//	const int c;
//	int& ref;
//public:
//	R(int);
//	void print() {
//		cout << i << " " << c << " " << ref << endl;
//	}
//};
//R::R(int x) :i(x), c(x), ref(x) {
//	// yukardaki i(x)'i silip i=x de yazabiliriz....
//}
//

//class Bank {
//	int num;
//public:
//	Bank() {
//		cout << "Hi!" << endl;
//		num = 9;
//	}
//	~Bank() {
//		cout << "Bye!";	}
//	void print() { cout << num << endl; }
//};

//class Bank {
//	int number[8];
//public:
//	Bank(int = 2);
//	void print();
//};
//Bank::Bank(int n) {
//	for (int i = 0;i < 8;i++) {
//		number[i] = n;
//	}
//}
//void Bank::print() {
//	for (int j = 0;j < 8;j++)
//		cout << number[j] << endl;
//}

//class Complex {
//	int real, imaj;
//public:
//	Complex(int r = 0, int i = 0) : real(r), imaj(i) {}
//	void print() { cout << real << " + " << imaj << "i" << endl; }
//	friend Complex add(Complex&, Complex&);
//};
//Complex add(Complex& one, Complex& two) {
//	Complex n(one.real + two.real, one.imaj + two.imaj);
//	return n;
//	}

//class Integer {
//	int num;
//public:
//	Integer(int n): num(n){}
//	Integer& increment(int);
//	void print() { cout << num << endl; }
//};
//Integer& Integer::increment(int n) {
//	num += n;
//	return *this;}

//class Rational {
//	int num, den;
//public:
//	Rational(int n, int d) : num(n), den(d){}
//	Rational prod(const Rational&);
//	int getNum() const { return num; }
//	int getDen() const { return den; }
//};
//Rational Rational::prod(const Rational& r) {
//	int a = r.num;
//	int b = r.den;
//	return (Rational(num * a, den * b));
//	}

//class Date {
//	int day, month, year;
//public:
//	Date(int d = 0,int m=0,int y=0): day(d),month(m),year(y) {}
//	void display() { cout << day <<"/"<< month <<"/"<< year << endl; }
//};
//class Student {
//	string name;
//	Date birthdate;
//public:
//	Student(string s, int d, int m, int y);
//	void print() {
//		cout << name << endl;
//		birthdate.display();
//	}
//};
//Student::Student(string s, int a, int b, int c) :birthdate(a, b, c) { name = s; }

//class Dept {
//	string dname;
//public:
//	void read() {
//		cout << "enter dept name:"; cin >> dname;
//	}
//	void print() { cout << dname; }
//};
//class Instructor {
//	string name;
//	Dept* d;
//public:
//	Instructor(Dept* p, string n) { d = p, name = n; }
//	void display() { cout << "Name: " << name << ", Dept: "; 
//												d->print(); }
//};

//class Emp {
//	string name;
//	int wage;
//	static int total;
//public:
//	void read() {
//		cout << "enter name & wage of employer: ";
//		cin >> name >> wage;
//		total += wage;
//	}
//	int getTotal() {return total;}
//};
//int Emp::total = 0;

//--------------INHERITANCE-----------------------

//ORNEK 1--------------------------------------
//class Base {
//protected:
//	int num;
//public:
//	void set(int x) { num = x; }
//	int get() { return num; }
//};
//class Derived :public Base {
//public:
//	void f() { ++num; }
//};

//ORNEK 2--------------------------------------
//class Person {
//protected:
//	string name;
//public:
//	Person(string s):name(s){}
//	~Person() { cout << "Person destructor" << endl; }
//	void print() { cout << "Name: " << name << endl; }
//};
//class Student:public Person {
//private :
//	float cgpa;
//public:
//	Student(string s, float c) :Person(s) { cgpa=c; }
//	~Student() { cout << "Student destructor" << endl; }
//	void print() {
//		Person::print();
//		cout << "Cgpa: " << cgpa << endl;
//	}
//};

//ORNEK 3--------------------------------------
//class Exam {
//protected:
//	string name;
//	int right, wrong, score;
//public:
//	Exam(string s) : name(s) { right = wrong = 0; }
//	void Compute() {
//		score = right - (wrong / 4);
//		cout << "Score: " << score << endl;
//	}
//};
//class MultipleChoice :public Exam {
//private:
//	char ans[20];
//public:
//	MultipleChoice(string s) :Exam(s) {  }
//	void read() {
//		cout << "Enter student answers :";
//		for (int i = 0;i < 20;i++)
//			cin >> ans[i];
//	}
//	void calculate(char[]);
//};
//
//void MultipleChoice::calculate(char key[]) {
//	for (int i = 0;i < 20;i++)
//		if (key[i] == ans[i])
//			right++;
//		else wrong++;
//	Compute();
//}

//ORNEK 4---------------------------------
//class Student {
//	int stuid;
//public:
//	Student(int n):stuid(n){}
//	int getStuId() {
//		return stuid;
//	}
//};
//class Instructor {
//	int empid;
//public:
//	Instructor(int x):empid(x){}
//	int getEmpId() { return empid; }
//};
//class Assistant :public Student, public Instructor {
//public:
//	Assistant(int s,int e):Student(s),Instructor(e){}
//};

//------------POLYMORPHISM------------------------

//ORNEK 1--------------------------
//class Base {
//public:
//	virtual void f1() { cout << "Base - f1" << endl; }
//	virtual void f2() { cout << "Base - f2" << endl; }
//};
//class Derived :public Base {
//public:
//	void f1() { cout << "Derived - f1"<<endl; }
//};

//ORNEK 2-------------------------------
class Shape {
protected:
	int x, y;
public:
	Shape(int a, int b):x(a),y(b){}
	virtual void print() { cout << "Location: " << "(" << x << "," << y << ")" << endl; }
};
class Circle :public Shape {
	int radius;
public:
	Circle(int a,int b,int c):Shape(a,b),radius(c){}
	void print() {
		cout << "Circle: " << endl << "Radius: " << radius << endl;
		Shape::print();
	}
};
class Square :public Shape {
	int side;
public:
	Square(int a, int b, int s) :Shape(a, b), side(s) {	}
	void print() {
		cout << "Square: " << endl << "Side: " << side << endl;
		Shape::print();
	}
};

//ORNEK 3-----------------------------
//class One {
//protected:
//	int a;
//public:
//	One(int x) :a(x){}
//	virtual ~One() { cout << "One destructor" << endl; }
//	void fun1() { a += 2; }
//	virtual void fun2() { cout << a << endl; }
//};
//class Two :public One {
//	int b;
//public:
//	Two(int x,int y):One(x),b(y){}
//	void fun1() { b += 2; }
//	void fun2() { cout << a << " " << b << endl; }
//	virtual ~Two() { cout << "Two destructor" << endl; }
//};

//----------ABSTRACT CLASS-------------------------

//ORNEK 1---------------------------------
//class Sekil {
//protected:
//	double alan, cevre;
//public:
//	virtual void senNesin() = 0;
//	virtual void alanHesapla() = 0;
//	virtual void cevreHesapla() = 0;
//	double getAlan()const { return alan; }
//	double getCevre()const { return cevre; }
//};
//class Dikdortgen :public Sekil {
//	double yukseklik, genislik;
//public:
//	Dikdortgen(double yukseklik,double genislik):yukseklik(yukseklik),genislik(genislik){}
//	void senNesin() { cout << "Ben dikdortgenim" << endl; }
//	void alanHesapla() {
//		alan = yukseklik * genislik;
//	}
//	void cevreHesapla() {
//		cevre = (yukseklik + genislik) * 2;
//	}
//};
//class Daire :public Sekil {
//	double r;
//public:
//	Daire(double r):r(r){}
//	void senNesin() { cout << "Ben daireyim" << endl; }
//	void alanHesapla() {
//		alan = r * r * 3.14;
//	}
//	void cevreHesapla() {
//		cevre = 2 * r * 3.14;
//	}
//};
//class Kare :public Dikdortgen {
//public:
//	Kare(double x):Dikdortgen(x,x){}
//	void senNesin() { cout << "Ben Kareyim" << endl; }
//
//};

//ORNEK 2--------------------------------
//class Instructor {
//protected:
//	string name;
//public:
//	virtual void read() = 0;
//	virtual int wage() = 0;
//};
//class Fulltime :public Instructor {
//	string title;
//public:
//	void read() {
//		cout << "enter title (Prof,Assoc,Dr,Asst) and name: ";
//		cin >> title >> name;
//	}
//	int wage();
//};
//int Fulltime::wage() {
//	if (title == "Prof") return 7000;
//	else if (title == "Assoc") return 6000;
//	else if (title == "Dr") return 5000;
//	else return 4000;
//}
//class Parttime :public Instructor {
//	int hrs;
//public:
//	void read() { cout << "Enter hours: "; cin >> hrs; }
//	int wage() { return hrs * 200; }
//};

int main() {
	// 1. ORNEK-------------------------
	/*int x, y;
	cin >> x >> y;
	cout << sum(x, y);*/

	// 2. ORNEK-------------------------
	/*int i = 1, j = 2;
	cout << i<<" " << j << endl;
	f(i, j);
	cout << i<< " " << j << endl;*/

	// 3. ORNEK-------------------------
	/*Rectangle k(4, 5);
	cout << k.area() << endl;*/

	//4. ORNEK--------------------------
	/*R r(4);
	r.print();*/

	//5. ORNEK--------------------------
	/*Bank isBank;
	isBank.print();*/

	//6. ORNEK--------------------------
	/*Bank x(3);
	x.print();
	Bank y;
	y.print();*/

	//7. ORNEK--------------------------
	/*Complex b1(2, 5), b2(3, 4);
	Complex b3 = add(b1, b2);
	b3.print();*/
	
	//8. ORNEK--------------------------
	/*Integer i(15);
	i.print();
	i.increment(5);
	i.increment(3);
	i.print();*/

	//9. ORNEK--------------------------
	/*Rational x(1, 3), y(2, 5);
	Rational p = x.prod(y);
	cout << "Product is " << p.getNum() << "/" << p.getDen();*/

	//10. ORNEK-------------------------
	/*Student s("inci", 17, 7, 1977);
	s.print();*/

	//11. ORNEK-------------------------
	/*Dept a1;
	Instructor b1(&a1, "Cigdem");
	a1.read();
	b1.display();*/

	//12. ORNEK-------------------------
	/*Emp firm[3];
	for (int i = 0;i < 3;i++) 
		firm[i].read();
		cout << "Wages amount total: " << firm[0].getTotal();
	*/
	//------INHERITANCE--------------------------

	//ORNEK 1---------------------------
	/*Derived d;
	d.set(5);
	d.f();
	cout << d.get() << endl;
	d.Base::set(10);
	cout << d.get() << endl;*/
	
	//ORNEK 2---------------------------
	/*Student stu("Ali", 3.1);
	stu.print();*/
	
	//ORNEK 3---------------------------
	/*char anskey[20];
	cout << "enter the anskey: ";
	cin >> anskey;
	MultipleChoice stu("Ali");
	stu.read();
	stu.calculate(anskey);*/

	//ORNEK 4---------------------------
	/*Assistant ipek(112233, 444);
	cout << "Student ID: " << ipek.getStuId() << endl;
	cout << "Employee ID: " << ipek.getEmpId();*/

	//------POLYMORPHISM--------------------------

	//ORNEK 1---------------------------
	/*Base* ptr = new Derived;
	ptr->f1();
	ptr->f2();
	Derived obj;
	Base& r = obj;
	r.f1();*/

	//ORNEK 2---------------------------
	Shape* arr[3];
	arr[0] = new Circle(5, 10, 3);
	arr[1] = new Square(20, 30, 4);
	arr[2] = new Circle(15, 25, 5);
	for (int i = 0;i < 3;i++)
	arr[i]->print();
	//delete[]arr;

	//ORNEK 3---------------------------
	/*One* p1, * p2;
	p1 = new One(3);
	p2 = new Two(2, 4);
	p1->fun1();
	p1->fun2();
	p2->fun1();
	p2->fun2();
	delete p1;
	delete p2;*/

	//------ABSTRACT CLASS------------------------

	//ORNEK 1---------------------------
	/*Sekil* dizi[3];
	dizi[0] = new Dikdortgen(10,2);
	dizi[1] = new Daire(10);
	dizi[2] = new Kare(5);
	for (int i = 0;i < 3;i++) {
		dizi[i]->senNesin();
		dizi[i]->alanHesapla();
		dizi[i]->cevreHesapla();
		cout << dizi[i]->getAlan() << "\t" << dizi[i]->getCevre() << endl;
	}*/

	//ORNEK 2---------------------------
	/*Instructor* dept[3];
	int type;
	for (int i = 0;i < 3;i++) {
		cout << "Enter 1 for fulltime and enter 2 for parttime: ";
		cin >> type;
		if (type == 1)
			dept[i] = new Fulltime;
		else dept[i] = new Parttime;
		dept[i]->read();
		dept[i]->wage();
		cout << "Instructors earns " << dept[i]->wage() << endl;
	}
	delete[]dept;*/


	return 0;
}