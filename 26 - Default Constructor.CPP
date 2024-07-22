//Default Constructor
#include<iostream.h>
#include<conio.h>
class demoDefault
{
	int num1,num2;
		public:
			demoDefault()
			{
				num1=10;
				num2=20;
			}
			void display()
			{
				cout<<"Number 1 is:"<<num1<<endl;
				cout<<"Number 2 is:"<<num2<<endl;
			}
};
void main()
{
	clrscr();
	demoDefault obj;
	obj.display();
	getch();
}