//bitwise expression
#include<iostream.h>
#include<conio.h>
void main()
{
	int num=212;
	clrscr();
	cout<<"Shift Right:"<<endl;
	for(int i=0;i<4;i++)
	{
		cout<<"212 >>" <<i<<" = "<<(num>>i)<<endl;
	}
//Shift Left
	cout<<endl<<"Shift Left:"<<endl;
	for(i=0;i<4;i++)
	{
		cout<<"212 >>" <<i<<" = " <<(num<<i)<<endl;
	}
	getch();
}