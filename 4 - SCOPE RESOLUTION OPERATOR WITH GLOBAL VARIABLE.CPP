//Scope Resolution operator with global variable
#include<iostream.h>
#include<conio.h>
int a=10;
void main()
{
	int a=20;
	clrscr();
	cout<<"Local Variable Value is:"<<a<<endl;
	cout<<"Global Variable Value is:"<<::a;
	getch();
}