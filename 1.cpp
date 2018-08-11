/*11.8.18. Program to find area of rec,sq,tri,cir*/
#include<iostream>
using namespace std;
int main()
{
	float area, l,b,h,s,r,i;
	int n=1;
	while(n==1)
	{
	
	cout << "Press 1 to find area of rectangle, 2 to find area of square, 3 to find area of triangle or 4 to find area of circle: \n";
	cin >> i;
	if(i==1)
	{
		cout << "Enter length and breadth of the rectangle: \n";
		cin >> l;
		cin >> b;
		area=l*b;
		cout << "The area of the rectangle= " << area<<endl;
	}
	else if(i==2)
	{
		cout << "Enter the side of the square: \n";
		cin >> s;
		area=s*s;
		cout << "The area of the square= " << area<<endl;
	}
	else if(i==3)
	{
		cout << "Enter the base and height of the triangle: \n";
		cin >> b;
		cin >> h;
		area=(b*h)/2;
		cout << "The area of the triangle= " << area<<endl;
	}
	else if(i==4)
	{
		cout << "Enter the radius of the circle: \n";
		cin >> r;
		area=3.14*r*r;
		cout << "The area of the circle= " << area<<endl;
	}
	

cout << "Press 1 to continue and 0 to stop \n";
cin >> n;

}
}
