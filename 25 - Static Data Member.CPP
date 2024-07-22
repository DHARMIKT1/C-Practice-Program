//Static Data Member
#include<iostream.h>
#include<conio.h>
class item
{
	static int count;
	int member;
		public:
			void getdata(int a)
			{
				member=a;
				count ++;
			}
			void getcount()
			{
				cout<<"count is"<<count<<endl;
			}
};
int item::count;
void main()
{
	clrscr();
	item a,b,c;
	a.getcount();
	b.getcount();
	c.getcount();
	a.getdata(100);
	b.getdata(200);
	c.getdata(300);
	cout<<"After getting a data"<<endl;
	a.getcount();
	getch();
}