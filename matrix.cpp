//ques13
#include<iostream>
using namespace std;
class matrix
{
	int m[3 ][3];
			int i,j;

	public: void getarray()
	{
		cout << "Enter the elements of the array: \n";
			for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cin>>m[i][j];
			}
		}
	}
	
	public: int addition(int a, int b)
	{
		int c[3][3];
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
			}
		}
		return c;
	}
	
	public: int subtraction(int a, int b)
	{
		int d[3][3];
	
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				d[i][j]=a[i][j]-b[i][j];
			}
		}
		return d;
	}
	public: int transposeA(int a, int b);
	{
		int t1[3][3],t2[3][3];
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				t1[i][j]=a[j][i];
			}
		}
		return t1;
    }
    
	public: int transposeB(int a, int b);
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				t2[i][j]=b[j][i];
			}
		}
          return t2;
	}
	public: int multiplication(int a, int b)
	{
		int m[3][3]={{0,0,0},{0,0,0},{0,0,0}};
			for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				for(k=0;k<3;k++)
				{
				m[i][j]=m[i][j]+(a[i][k]+b[k][j];
			    }
			}
		}
		
	}
	public: void display()
	{
	  	
			for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<m[i][j];
			}
		}	
	}
};
int main()
{
	matrix m1, m2;
	m1.getarray();
	m2.getarray();
	m1.display();
	m2.display();
	matrix sum, diff, trans, mult;
	sum=addition(m1,m2);
	sum.display();
	
}
