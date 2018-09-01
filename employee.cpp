#include<iostream>
using namespace std;
struct employee
{
	char name[100];
	int id;
	float sal,hra;
};
int main()
{
	employee e1={"Abcxyz",123,5000},e2;
	
	e1.hra=0.15*e1.sal;
	cout << "Enter the Employee name: ";
	cin >> e2.name;
	cout << "\n Enter the Employee ID: ";
	cin >> e2.id;
	cout << "\n Enter the Employee Salary: ";
	cin >> e2.sal;
	e2.hra=0.15*e2.sal;
	cout << "Name of Employee1 : " << e1.name << "\n Employee1 ID: " << e1.id << "\n Employee1 Salary: " << e1.sal << "\n Employee1 HRA: " << e1.hra;
    cout << "\nName of Employee2 : " << e2.name << "\n Employee2 ID: " << e2.id << "\n Employee2 Salary: " << e2.sal << "\n Employee2 HRA: " << e2.hra;
		
}

