//Local Class
#include<iostream.h>
#include<conio.h>
void fun()
{
	class test
	{
		public:
			void disp()
			{
				cout<<"Local Class Method";
			}
	};

	test t;
	t.disp();
}
void main()
{
	clrscr();
	fun();
	getch();
}