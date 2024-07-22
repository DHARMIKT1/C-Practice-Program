//Dyanamic Memory Allocation For Object
#include<iostream.h>
#include<conio.h>
class test
{
	int a,b,c;
		public:
			test()
			{
				a=10;
				b=20;
				c=30;
			}
			void showdata();
};
void test::showdata()
{
	cout<<"Value of A is:"<<a<<endl;
	cout<<"Value of B is:"<<b<<endl;
	cout<<"Value of C is:"<<c<<endl;
}
void main()
{
	clrscr();
	test *t=new test();
	t->showdata();
	delete t;
	getch();
}