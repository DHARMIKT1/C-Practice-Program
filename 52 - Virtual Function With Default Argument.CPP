//Virtual Function With Default Argument
#include<iostream.h>
#include<conio.h>
class base
{
	public:
		virtual void display(int a=0)
		{
			cout<<"Base :"<<a<<endl;
		}
};
class derived:public base
{
	public:
		void display(int a)
		{
			cout<<"Derived :"<<a<<endl;
		}
};
void main()
{
	clrscr();
	base b,*ptr;
	ptr=&b;
	derived d;
	ptr=&d;
	ptr->display(10);
	getch();
}