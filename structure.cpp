//program using structures
#include<iostream>
using namespace std;
struct dist
{
	int feet;
	float inches;

};

int main()
{
	dist d1,d2,d3;
	cout << "Enter the distance 1- feets:";
	cin >> d1.feet;
	cout << "\nEnter the distance 1- inches:";
	cin >> d1.inches;
	cout << "\nEnter the distance 2- feets:";
	cin >> d2.feet;
	cout << "\nEnter the distance 2- inches:";
	cin >> d2.inches;
	d3.feet=0;
	d3.inches=d1.inches+d2.inches;
	if(d3.inches>=12)
	{
		d3.feet++;
		d3.inches=d3.inches-12;
	}
	d3.feet+=d1.feet+d2.feet;
	cout <<"\n The sum is- feets " << d3.feet << "inches : " <<d3.inches;
	return 0;
}
