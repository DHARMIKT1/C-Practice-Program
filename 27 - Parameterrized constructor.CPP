//Parameterrized constructor
#include<iostream.h>
#include<conio.h>
class demoparameter
{
	int num1,num2;
		public:
			demoparameter(int x,int y)
			{
				num1=x;
				num2=y;
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
	demoparameter obj(10,20);
	obj.display();
	getch();
}