//getline function
#include<iostream.h>
#include<conio.h>
void main()
{
	int size=20;
	char city[20];
	clrscr();
	cout<<"Enter Your City:";
	cin.getline(city,size);
	cout<<endl<<"Your City is:"<<city;
	getch();
}