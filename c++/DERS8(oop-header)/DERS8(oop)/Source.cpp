#include<iostream>
using namespace std;
#include "Employee.h"



int main() {
	Employee employee;
	employee.id = 12;
	employee.name = "Mustafa";
	employee.salary = 3000;
	employee.showInfos(); 
	return 0;
	}