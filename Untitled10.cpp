//program to check if a number is prime or not
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter a number: \n";
	cin >> n;
	int count=0;
	int i;
	for(i=1;i<n;i++)
	{
		int rem=n%i;
		if(rem==0)
		count++;
	}
	if (count==1)
	cout << "The number is a PRIME number ";
	else
	cout << "The number is NOT a prime number";
}
