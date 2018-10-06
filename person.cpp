#include<iostream>
using namespace std;
class person
{
	protected:
	char name[70];
	int age;
	int salary;
	int rn;
};
class teacher : public person
{
	public:
	void getdata()
	{
	    cout << "Enter the name of Teacher: ";
		cin >> name;
		cout << "Enter the salaray of the Teacher: ";
		cin >> salary;
	}
	void showdata()
	{
	    cout<<"Name of teacher: " << name;
		cout << "\nSalary of teacher: " << salary << endl;
	}
};
class student: public person
{
	public:
	void getdata()
	{
		cout << "Enter the name of the student: ";
		cin >> name;
		cout << "Enter the roll no. of the student: ";
		cin >> rn;
	}
		void showdata()
	{
	    cout<<"Name of Student: " << name;
		cout << "\nRoll no of student: " << rn << endl;
	}
};
int main()
{
	teacher t1,t2,t3;
	student s1,s2,s3;
	t1.getdata();
	t1.showdata();
	t2.getdata();
	t2.showdata();

	s1.getdata();
	s1.showdata();
	s2.getdata();
	s2.showdata();

	
}
