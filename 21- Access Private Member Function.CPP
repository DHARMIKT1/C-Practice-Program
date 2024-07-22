//Access Private Member Function
#include<iostream.h>
#include<conio.h>
class si
{
	int p,n;
		float i,r;
			void getdata(int p1,float r1,int n1)
			{
				p=p1;
				r=r1;
				n=n1;
			}
			public:
			void cal_si(int x,float y,int z)
			{
				getdata(x,y,z);
				i=(p*r*n)/100;
			}
			void display()
			{
				cout<<"Simple Interst is:"<<i;
			}
};
void main()
{
	clrscr();
	si s;
	s.cal_si(100,10,5);
	s.display();
	getch();
}