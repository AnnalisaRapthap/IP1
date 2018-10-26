//filehandling
#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	ifstream f1("details.txt");
	string name[5];
	int age[5];
	float sal[5];
	cout << "Enter the details: ";
	for(int i=0;i<5;i++)
	{
	cin >> name[i];
    cin >> age[i];
	cin >> sal[i];
   }
   ofstream f("details.txt");
   for(int i=0;i<5;i++)
   {
   	f<<"Name: " << name[i] << "\t" << "Age: " << age[i] << "\t"<< "Salary: " << sal[i] << "\n";
   }
   
}

