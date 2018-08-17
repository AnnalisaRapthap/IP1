//program to print nth odd numbers
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the term till which odd numbers are to be printer: \n";
	cin >> n;
	int p=1;
	int i=1;
	do
	{
	
	
	      cout << i << "\t";
	      i+=2;
	      p++;
    }while(p<=n);
}
