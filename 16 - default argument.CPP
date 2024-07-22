//default argument
#include<iostream.h>
#include<conio.h>
void display(int a,int b,int c=10)
{
	cout<<"Value of A is:"<<a<<endl;
	cout<<"Value of B is:"<<b<<endl;
	cout<<"Value of C is:"<<c;
}
void main()
{
	clrscr();
	display(10,20);
	getch();
}