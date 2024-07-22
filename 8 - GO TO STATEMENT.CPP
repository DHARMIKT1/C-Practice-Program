//go to statement
#include<iostream.h>
#include<conio.h>
void main()
{
	float num,average,sum=0.0;
	int i,n;
	clrscr();
	cout<<"Enter Maximum Number of Input:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"Enter n"<<i<<":";
		cin>>num;
		if(num < 0.0)
		{
			go to jump;
		}
		sum += num;
	}
	jump:
	average=sum / (i-1)
	cout<<endl<<"Average ="<<average;
	getch();
}