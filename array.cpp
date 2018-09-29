#include<iostream>
using namespace std;
int main()
{
	int c,ch, ar[100];
	int sum=0;;
	int i,size;
	cout << "Enter the size of the array: ";
	cin >> size;
	cout << "Enter the elements of the array: ";
	for(i=0;i<size;i++)
	{
		cin >> ar[i];
	}
	int max=ar[0], min=ar[0];
	do {
	cout << "PRESS:\n 1 to PRINT EVEN-VALUED elements. \n 2 to PRINT ODD_VALUED elements. \n 3 to Calculate and Print the SUM and AVERAGE  of the elements. \n 4 to PRINT the MAX and MIN elements\n";
	cin >> c;
	switch(c)
	{
		case 1: cout << "THE EVEN-VALUED ELEMENTS ARE: ";
		 for(i=0;i<size;i++)
		{
			if(ar[i]%2==0)
			cout << ar[i] << "\t";
		}
		break;
		 
		case 2: cout << "THE ODD-VALUED ELEMENTS ARE: ";
		 for(i=0;i<size;i++)
		{
			if(ar[i]%2!=0)
			cout << ar[i] << "\t";
		}
		break;
		case 3:
			sum=0;
			float avg;
			for(i=0;i<size;i++)
			{
				sum=sum+ar[i];
				
			}
			cout << "THE SUM = " << sum;
			avg=sum/size;
			cout << "\nTHE AVERAGE = " <<avg;
			break;
			
		case 4:
			for(i=0;i<size;i++)
			{
				if(ar[i]<min)
				min=ar[i];
				else if(ar[i]>max)
				max=ar[i];
			}
			cout << "THE MAXIMUM NUMBER= " << max;
			cout << "\nTHE MINIMUM NUMBER= " << min;
			break;
		
		default: cout << "\nInvalid Entry";
		continue;
	}
	cout << "\nPress 1 to continue and 0 to stop";
	cin >> ch;
}while(ch==1);
}
