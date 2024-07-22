//Virtual function
#include<iostream.h>
#include<conio.h>
class Base
{
	public:
		void nonvirtual()
		{
			cout<<"non virtual funvtion of base class"<<endl;
		}
		virtual void virtualfun()
		{
			cout<<"virtual function of base class"<<endl;
		}
};
class derived:public Base
{
	public:
		void nonvirtual()
		{
			cout<<"non virtual function of base class"<<endl;
		}
		void virtualfun()
		{
			cout<<"virtual function of derived class"<<endl;
		}
};
void main()
{
	clrscr();
	Base b,*bptr;
	bptr=&b;
	bptr->virtualfun();
	bptr->nonvirtual();
	derived d;
	bptr=&d;
	cout<<endl;
	bptr->virtualfun();
	bptr->nonvirtual();
	getch();
}