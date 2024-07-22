//function call by value
#include<iostream.h>
#include<conio.h>
void add(int,int);
void main()
{
	int a,b;
	clrscr();
	cout<<"Enter A:";
	cin>>a;
	cout<<"Enter B:";
	cin>>b;
	add(a,b);
	getch();
}
void add(int a,int b)
{
	int c=a+b;
	cout<<endl<<"Addition is:"<<c;
}