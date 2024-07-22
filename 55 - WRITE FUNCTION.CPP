//write function
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	char *s1="sssdiit";
	char *s2="college";
	clrscr();
	int m=strlen(s1);
	int n=strlen(s2);
	for(int i=1;i<n;i++)
	{
		cout.write(s2,i);
		cout<<endl;
	}
	for(i=n;i>0;i--)
	{
		cout.write(s2,i);
		cout<<endl;
	}
	cout.write(s1,m).write(s2,n);
	cout<<endl;
	cout.write(s1,10);
	getch();
}