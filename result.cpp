#include<fstream>
#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
int main()
{
	string name;
	int m1, m2;
	float avg;
	ifstream f1("result.txt");
	cout << "Enter the name:";
	cin >> name;
	cout << "Enter the marks in Maths and Science: ";
	cin >> m1 >> m2;
	avg=(m1+m2)/2;
	ofstream f2("result.txt");
	f2 << "Name: " << setw(10)<< "Maths" << setw(10) << "Science" << setw(10) << "Percentage" << "\n";
	f2 << name <<  setw(10)<< m1 <<  setw(10) << m2 <<  setw(10) << avg;
}
