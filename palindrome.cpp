//program to determine if a number is a palindrome
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number:\n";
	cin >> n;
	int rev=0,rem,i=n;
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		rev=rev*10+rem;
	}
	if(rev==i)
	cout << "The number is a PALINDROME";
	else
	cout << "The number is NOT a palindrome";
}
