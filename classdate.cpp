#include<iostream>
using namespace std;
class date
{
	int m,d,y;
	public:
		void getdate()
		{
			cout << "Enter the month: ";
			cin>>m;
			cout << "Enter the day: ";
			cin>>d;
			cout << "Enter the year: ";
			cin>>y;
		}
		void showdate()
		{
			cout << "The date is " << m <<"/"<<d<<"/"<<y;
		}
};
int main()
{
	date d1;
	d1.getdate();
	d1.showdate();
}
