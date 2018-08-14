//14.8.18 To display pyramid
#include <iostream>
using namespace std;

int main() {
	int i=4,k,j,l=1;
	while(l<=8)
	{
	for(k=i;k>0;k--)
	{
		cout << " ";
	}
	i--;

	for(j=1;j<=l;j++)
	{
		cout << "*";
	}
	cout << endl;
	l=l+2;
	}
	return 0; 
}
