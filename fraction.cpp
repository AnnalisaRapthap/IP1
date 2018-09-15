/*create a class called fraction, member data is the fraction's numerator and denominator, member functions should accept inputs from the user
and output the fraction's value in the format numerator/denominator. Another member func should add two fraction values. Write a main program that
allows the user to repeatedly input two fractions and then display their sum after each operation ask the user whether he wants to continue.*/
#include<iostream>
using namespace std;
class fraction
{
	int num,den;
	char dummy;
	public:
		void input()
		{
			cout << "\nEnter the Fraction(numerator/denominator): ";
			cin>>num>>dummy>>den;
		}
	
		void sum(fraction a, fraction b)
		{
		  int gcd,i;
		  num=(a.num*b.den)+(b.num*a.den);
		  den=a.den*b.den;
		  if(num>den)
		  gcd=den;
		  else
		  gcd=num;
		  for(i=gcd;i>=1;i--)
		  {
		  	if(num%i==0&&den%i==0)
		  	{
		  		gcd=i;
		  		break;
		  	}
		  	else
		  	continue;
		  }
		  num=num/gcd;
		  den=den/gcd;
		  
		}
			void output()
		{
		    cout<< "\nThe Sum of the fractions is: " << num<<"/" <<den;
		}
};
int main()
{
	fraction f1,f2,s;
	int ch=1;
	cout << "To add two Fractions";
	while(ch==1)
	{
	f1.input();
	
	f2.input();
	
    s.sum(f1,f2);
    s.output();
    cout << "\nPress 1 to continue and 0 to Stop";
    cin>>ch;
}
}

