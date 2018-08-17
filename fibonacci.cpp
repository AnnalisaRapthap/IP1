//program to print fibonacci series to nth term
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number of terms:\n";
	cin >> n;
	int i,j,k;
	i=1;
	j=1;
	cout << "The Fibonacci series is=" << i << "," << j << ",";
	int p=3;
	while(p<=n)
	{
		k=i+j;
		i=j;
		j=k;
		cout << k << ",";
		p++;
	}
}
