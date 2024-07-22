//call by reference
#include<iostream.h>
#include<conio.h>
void swap(int &,int &);
void main()
{
	int a,b,temp;
	clrscr();
	cout<<"Enter A:";
	cin>>a;
	cout<<"Enter B:";
	cin>>b;

	cout<<endl<<"Before Swap"<<endl;
	cout<<"A = "<<a<<endl;
	cout<<"B = "<<b;

	swap(a,b);

	cout<<endl<<"After Swap"<<endl;
	cout<<"A = "<<a<<endl;
	cout<<"B = "<<b;
	getch();
}
void swap (int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

