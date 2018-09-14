#include<iostream>
using namespace std;
class Employee
{
	private:
		int emp_no;
		float emp_sal;
		
	public:
		void getinfo()
		{
			cout<<"Enter the employee number: ";
			cin>>emp_no;
			cout <<"Enter the employee salary: ";
			cin>>emp_sal;
		}
	public:
		void display()
		{
			cout << "\nThe Employee number="<<emp_no;
			cout<<"\nThe Employee Salary="<<emp_sal;
		}
	Employee()
	{
	}
	~Employee()
	{
	}
};
int main()
{
	Employee e1,e2,e3;
	e1.getinfo();
	e2.getinfo();
	e3.getinfo();
	e1.display();
	e2.display();
	e3.display();
	return 0;
}
