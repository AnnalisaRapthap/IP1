//pyramid
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number of lines: \n";
	cin >> n;
	int i,j,k=1,l=n;
	while(k<=n+(n-1))
	{
		for(i=1;i<l;i++)
		{
			cout << " ";
		}
		for(j=1;j<=k;j++)
		{
			cout << "*";
		}
		cout << endl;
		k+=2;
		l--;
	}
}
