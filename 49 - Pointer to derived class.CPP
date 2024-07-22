//Pointer to Derived class
#include<iostream.h>
#include<conio.h>
class Base
{
	public:
		int b;
		void display()
		{
			cout<<"inside Base class"<<endl;
			cout<<"Base:"<<b<<endl;
		}
};
class Derived:public Base
{
	public:
		int d;
		void display()
		{
			cout<<"inside Derived"<<endl;
			cout<<"Base:"<<b<<endl;
			cout<<"Derived:"<<d<<endl;
		}
};
void main()
{
	clrscr();
	Base b,*ptr;
	ptr=&b;
	ptr->b=10;
	ptr->display();
	Derived d;
	ptr=&d;
	ptr->b=20;
	cout<<"Base Pointer Pointing to Derived Object";
	ptr->display();
	Derived *ptr2;
	ptr2=&d;
	ptr2->d=30;
	cout<<"Derived pointer pointing to derived object";
	ptr2->display();
	getch();
}