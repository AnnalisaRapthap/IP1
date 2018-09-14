#include<iostream>
using namespace std;
class counter
{
	int count;

	public:	counter()
		{
			count=0;
		}
	public:
	void increment()
	{
		count++;
	}
	void decrement()
	{
		count--;
	}
	void show()
	{
		cout << "\nThe counter is "<< count;
	}
};
int main()
{
	counter c;
	int ch;
	do
	{
	cout << "\nMenu:";
	cout << "\n1.Increment";
	cout << "\n2.Decrement";
	cout <<"\n3.Show";
	cout<<"\n4.Exit\n";
	cin>>ch;
    switch(ch)
    {
    	case 1: c.increment();
    	break;
    	case 2: c.decrement();
		break;
		case 3: c.show();
		break;
    	case 4: break;
    	default: cout<<"Please Enter a valid option";
	}
	}while(ch!=4);
	return 0;

}




