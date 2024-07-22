//setw()
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
	int a=12;
	int b=123;
	int c=1234;
	clrscr();
	cout<<"A = "<<setw(5)<<a<<endl;
	cout<<"B = "<<setw(5)<<b<<endl;
	cout<<"C = "<<setw(5)<<c<<endl;
	getch();
}