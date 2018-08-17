//program to find the square roots from 1 to n
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number till which the square root is to be printed: \n";
	cin >> n;
	cout << "The square roots are: \n";
	for(int i=1;i<=n;i++)
	{
		cout << setw(5) << i <<"\t"<< setw(5) <<  sqrt(i) << endl;
	}
}
