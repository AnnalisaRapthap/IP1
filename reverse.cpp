//program to print the reverse of a number
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number to be reversed: \n";
	cin >> n;
	int i=n;
	int rev=0, rem;
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		rev=rev*10+rem;
	}
	cout << "The reverse of" << i << "=" << rev;
}
