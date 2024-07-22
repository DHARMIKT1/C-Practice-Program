//default argument with constructor
#include<iostream.h>
#include<conio.h>
class A
{
	int var;
		public:
			A (int x=10)
			{
				var=x;
			}
			int setvar()
			{
				return var;
			}
};
void main()
{
	clrscr();
	A obj;
	cout<<"Var value is:"<<obj.setvar()<<endl;
	A obj1(20);
	cout<<"Now value of var is:"<<obj1.setvar();
	getch();
}