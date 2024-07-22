//Constructor to derived class
#include<iostream.h>
#include<conio.h>
class abc
{
	protected:
		int a;
	public:
		abc(int m)
		{
			cout<<"Base Class Constructor"<<endl;
			a=m;
		}
};
class pqr
{
	protected:
		int p;
	public:
		pqr(int m)
		{
			cout<<"Base pqr Class Constructor"<<endl;
			p=m;
		}
};
class xyz:public abc,public pqr
{
	int x;
	public:
		xyz(int a,int b,int c):abc(a),pqr(b)
		{
			cout<<"Constructor in Derived Class"<<endl;
			x=c;
		}
		void show()
		{
			cout<<"A = "<<a<<endl;
			cout<<"B = "<<p<<endl;
			cout<<"C = "<<x<<endl;
		}
};
void main()
{
	clrscr();
	xyz obj(10,20,30);
	obj.show();
	getch();
}
