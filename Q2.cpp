/*
Q.No. 2
Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a
class named 'Rectangle' with a function named 'Area' which returns the area.
*/
#include<iostream>
using namespace std;
class Rectangle
{
    private:
		int l,b;
	
	public:	
	
	void set(int x,int y)
	{
		l=x;
		b=y;
	}
	
	int area()
	{
		int ans=l*b;
		return (ans);
	}
};
int main()
{
	Rectangle r1,r2;
	r1.set(4,5);
	cout<<"\nArea of 1st Rectangle is:"<<r1.area();
	r2.set(5,8);
	cout<<"\nArea of 2nd Rectangle is:"<<r2.area();

	return 0;
	
	
	
}