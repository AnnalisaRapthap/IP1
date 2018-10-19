#include <iostream>
using namespace std;
int main()
{
	int ma[3][3], mb[3][3];
		int i,j, sum[3][3];
		cout << "Enter the elements: ";
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cin >> ma[i][j];
			}
		}
		cout << "Enter the elements: ";
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cin >> mb[i][j];
			}
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				sum[i][j]=ma[i][j]+mb[i][j];
			}
		}
		cout << "The sum of matrices= ";
		for(i=0;i<3;i++)
		{
			cout << endl;
			for(j=0;j<3;j++)
			{
				cout << sum[i][j] << "\t";
			}
		}
}
