//function overloading
#include<iostream.h>
#include<conio.h>
void add();
void add(int,int);
void main()
{
	int a,b;
	clrscr();
	cout<<"Enter A:";
	cin>>a;
	cout<<"Enter B:";
	cin>>b;
	add();
	add(a,b);
	getch();
}
void add()
{
	int x=11,y=22;
	cout<<"Addition is:"<<x+y;
}
void add(int a,int b)
{
	cout<<endl<<"Addition is:"<<a+b;
}