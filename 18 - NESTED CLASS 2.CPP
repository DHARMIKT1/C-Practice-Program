//Nested Class
#include<iostream.h>
#include<conio.h>
class A
{
	public:
		class B
		{
			public:
				void disp()
				{
					cout<<"Nested Class";
				}
		};
};
void main()
{
	clrscr();
	A::B obj;
	obj.disp();
	getch();
}