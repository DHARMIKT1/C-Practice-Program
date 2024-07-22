//Scope Resolution Operator With Class
#include<iostream.h>
#include<conio.h>
class test
{
	public:
		void disp();
};
void test::disp()
	{
		cout<<"Member Function Defnation Out Side Class";
	}
void main()
{
	clrscr();
	test t;
	t.disp();
	getch();
}