//Stream Class
#include<iostream.h>
#include<conio.h>
void main()
{
	int count=0;
	char c;
	clrscr();
	cout<<"Enter String :";
	cin.get(c);
	while(c!='\n')
	{
		cout.put(c);
		count++;
		cin.get(c);
	}
	cout<<endl;
	cout<<"Number of character is :"<<count<<endl;
	getch();
}