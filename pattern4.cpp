/*18.8.18
        *
       **
	  ***
	 ****...*/      
#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,l;
	cout << "Enter the number of lines: \n";
	cin >> n;
	l=n;
	k=1;
	while(l>0)
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
		k++;
		l--;
	}
}
