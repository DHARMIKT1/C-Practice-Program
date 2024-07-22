//Single Inheritance
#include<iostream.h>
#include<conio.>
class Base
{
	int b;
	public:
		void getBase(int x)
		{
			b=x;
		}
		void displayBase()
		{
			cout<<"Base = "<<b<<endl;
		}
};
class Derived:public Base
{
	int d;
	public:
		void getDerived(int y)
		{
			d=y;
		}
		void displayDerived()
		{
			cout<<"Derived = "<<d<<endl;
		}
};
void main()
{
	clrscr();
	Derived d;
	d.detBase(100);
	d.getDerived(200);
	d.displayBase();
	d.displayDerived();
	getch();
}