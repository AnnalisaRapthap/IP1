//program to print the series 5=1-2+3-4+5
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number of terms in the series:\n";
	cin >> n;
	int p=2;
	cout << n << "=" << 1;
	while(p<=n)
	{
		if(p%2==0)
		cout << "-";
		else
		cout << "+";
		cout << p;
		p++;
	}
}
