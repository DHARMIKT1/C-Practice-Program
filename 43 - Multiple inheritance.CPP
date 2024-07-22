//Multiple inheritance
#include<iostream.h>
#include<conio.h>
class Base1
{
	protected:
		int B1;
	public:
		void getB1(int x)
		{
			 B1=x;
		}
};
class Base2
{
	protected:
		int B2;
	public:
		void getB2(int y)
		{
			B2=y;
		}
};
class Derived:public Base1,public Base2
{
	int d;
	public:
		void getderived(int z)
		{
			d=z;
		}
		void show()
		{
			cout<<"Base1 : "<<B1<<endl;
			cout<<"Base2 : "<<B2<<endl;
			cout<<"Derived : "<<d<<endl;
		}
};
void main()
{
	clrscr();
	Derived obj;
	obj.getB1(100);
	obj.getB2(200);
	obj.getderived(300);
	obj.show();
	getch();
}