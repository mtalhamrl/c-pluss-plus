#include<iostream>
using namespace std;
class Employee {
private:
	string name;
	int age;
public:
	void setAge(int yas) {
		if (yas < 0) {
			cout << "There is not a value"<<endl;
		}
		else 
		age = yas;
	}
	int getAge() {
		return age;
	}
	void setName(string isim) {
		name = isim;
	}
	string getName() {
		return name;
	}

};
//encapsulation private belirteciyle kodumuzu saðlama alýrýz ve sonradan kullananlarýn yapcaðý bir yanlýþý önlemeye çalýþýrýz...
//küçük çaplý kodlarla belirgin bir etkisi olmasa da büyük programlarda çok önemlidir...

int main() {
	Employee employee;
	employee.setName("Talha");
	employee.setAge(21);
	cout << employee.getName() << endl;
	cout << employee.getAge() << endl;

	//pointer kullanýmý
	/*Employee* employee1 = new Employee();
	employee1->setName("Mustafa");
	employee1->setAge(23);
	cout << employee1->getName() << endl;
	cout << employee1->getAge() << endl;*/




	return 0;
}