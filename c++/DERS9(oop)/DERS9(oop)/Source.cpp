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
//encapsulation private belirteciyle kodumuzu sa�lama al�r�z ve sonradan kullananlar�n yapca�� bir yanl��� �nlemeye �al���r�z...
//k���k �apl� kodlarla belirgin bir etkisi olmasa da b�y�k programlarda �ok �nemlidir...

int main() {
	Employee employee;
	employee.setName("Talha");
	employee.setAge(21);
	cout << employee.getName() << endl;
	cout << employee.getAge() << endl;

	//pointer kullan�m�
	/*Employee* employee1 = new Employee();
	employee1->setName("Mustafa");
	employee1->setAge(23);
	cout << employee1->getName() << endl;
	cout << employee1->getAge() << endl;*/




	return 0;
}