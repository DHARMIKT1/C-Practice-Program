//function return by reference
#include<iostream.h>
#include<conio.h>
int &min (int &,int &);
void main()
{
	int a,b,res;
	clrscr();
	cout<<"Enter A:";
	cin>>a;
	cout<<"Enter B:";
	cin>>b;

	res=min(a,b);
	cout<<"Minimum Value is:"<<res;
	getch();
}
int &min (int &x,int &y)
{
	if(x<y)
		return x;
	else
		return y;
}