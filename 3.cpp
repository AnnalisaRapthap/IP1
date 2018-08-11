//11.8.18 to input marks in three subjects and calculate the percentage
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float maths,eng,comp, p;
	char name[40];
	cout << "Enter the Name of the student: \n";
	cin >> name;
	cout << "Enter the marks in Mathematics: \n";
	cin >> maths;
	cout << "Enter the marks in English: \n";
	cin >> eng;
	cout << "Enter the marks in Computer Science: \n";
	cin >> comp;
	p=(maths+eng+comp)/3;
	cout << setw(20)<<"Name: " << setw(15) << name << endl;
	cout <<setw(20)<< "Subjects" << setw(15) << "Marks" << endl;
	cout <<setw(20)<< "Mathematics" << setw(15) << maths << endl;
	cout <<setw(20)<< "English" << setw(15) << eng << endl;
	cout <<setw(20)<< "Computer Science" << setw(15) << comp << endl;
	cout << "\n";
	cout <<setw(20)<< "Percentage= " <<setw(20)<< p <<"%";
}
