//function overloading
#include<iostream.h>
#include<conio.h>
class test
{
	int a,b;
		public:
			void add();
			void add(int,int);
};
void test::add()
{
	int x=10;
	int y=20;
	cout<<"Addition is:"<<x+y<<endl;
}
void test::add(int a,int b)
{
	cout<<"Addition is:"<<a+b;
}
void main()
{
	test o;
	clrscr();
	o.add();
	o.add(11,22);
	getch();
}
