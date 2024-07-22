//Function of Friend
#include<iostream.h>
#include<conio.h>
class friendfun
{
	int a,b;
		public:
			void setdata(int x,int y)
			{
				a=x;
				b=y;
			}
			void display()
			{
				cout<<"Value of A is:"<<a<<endl;
				cout<<"Value of B is:"<<b<<endl;
			}
			friend void sum(friendfun fa);
};
void sum(friendfun fa)
{
	int s=fa.a+fa.b;
	cout<<endl<<"Sum is:"<<s;
}
void main()
{
	clrscr();
	friendfun obj;
	obj.setdata(10,20);
	obj.display();
	cout<<endl;
	sum (obj);
	getch();
}