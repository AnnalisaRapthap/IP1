//calculator program for two operands
#include<iostream>
using namespace std;
int add(int a, int b)
{
	int sum=a+b;
	return sum;
}
int subtract(int a, int b)
{
	int dif;
	if(a>b)
	dif=a-b;
	else
	dif=b-a;
	return dif;
}
float remainder(int a, int b)
{
	float rem=a%b;
	return rem;
}
float divide(int a, int b)
{
	float quo=a/b;
	return quo;
}
float multiply(int a, int b)
{
	float prod=a*b;
	return prod;
}
int main()
{
	char c;
	int choice=1;
	int a, b;
	
	while(choice==1)
	{	
	cout << "Enter two numbers: ";
	cin >> a;
    cin >> b;
	cout << "Select the operation to be performed: \n";
    cout << "+ for addition" << "\n - for subtraction" << "\n % to find remainder" << "\n / to find quotient" << "\n * for multiplication    " <<endl ;
    cin >> c;
		if(c=='+')
		
			cout << "The sum is=" << add(a,b);
		else if(c=='-')
		    
		    cout << "\nThe difference is=" << subtract(a,b);
	    else if(c=='%')
	      
	        cout << "\n The remainder=" <<remainder(a,b);
	        
	    else if(c=='/')
	        
	        cout << "\n The quotient="<<divide(a,b);
	        
	    else if(c=='*')
	    
	        cout << "\n The Product=" << multiply(a,b);
	    else 
	        cout << "Sorry, Error encountered;";
	cout << "\nPress 1 to Continue and 0 to Stop : \n ";
	cin >> choice;
	        
}
	cout << "\n You have terminated the program";
}

