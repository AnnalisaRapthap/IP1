//program to print nth even numbers
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the term till which even numbers are to be printer: \n";
	cin >> n;
	int p=1;
	int i=2;
	do
	{
	
	
	      cout << i << "\t";
	      i+=2;
	      p++;
    }while(p<=n);
}
