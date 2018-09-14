#include<iostream>
using namespace std;
struct Date
{
	int d,m,y;
};
struct Time
{
	int h,mins,sec;
};
class DateTime
{
	Date d;
	Time t;
	
	public:
		void input()
		{
			cout<<"Enter the date(day/month/year)";
			cin>>d.d>>d.m>>d.y;
			cout<<"Enter the time(hours,minutes,seconds)";
			cin>>t.h>> t.mins >> t.sec;
		}
		void output()
		{
			cout <<"\nThe Date is- " << d.d <<"/" << d.m <<"/"<<d.y;
			cout<<"\nThe Time is- " << t.h <<":"<< t.mins <<":"<<t.sec;
		}
};
int main()
{
	DateTime dt;
	dt.input();
	dt.output();
	return 0;
}
