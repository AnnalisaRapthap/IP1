#include<iostream>
using namespace std;
struct phone
{
	int ar,ex,no;
};

int main()
{
	phone p1,p2;
	p1={064,2231,782};
	cout << "Enter the area code: ";
	cin >> p2.ar;
	cout << "\nEnter the exchange number: ";
	cin >> p2.ex;
	cout << "\nEnter the phone number: ";
	cin >> p2.no;
	cout << "(" << p1.ar << ")" << p1.ex << "-" << p1.no;
    cout << "\n(" << p2.ar << ")" << p2.ex << "-" << p2.no;
return 0;
}
