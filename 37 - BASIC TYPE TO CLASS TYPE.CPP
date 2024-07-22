//basic type to class type
#include<iostream.h>
#include<conio.h>
class number
{
	int no;
	public:
		number()
		{
			no=0;
		}
		number (int n)
		{
			no=n;
		}
		void display()
		{
			cout<<"No is:"<<no;
		}
};
void main();
{
	clrscr();
	int t;
	cout<<"Enter Number:";
	cin>>t;
	number n1=t;
	n1.display();
	getch();
}