//unary minus operator
#include<iostream.h>
#include<conio.h>
class Number
{
	int a,b;
		public:
			void getnumber(int x,int y)
			{
				a=x;
				b=y;
			}
			void display()
			{
				cout<<"A = "<<a<<endl;
				cout<<"B = "<<b<<endl;
			}
			void operator ++()
			{
				a=++a;
				++b=b;
			}
};
void main()
{
	clrscr();
	Number n;
	n.getnumber(30,40);
	n.display();
	++n;
	cout<<"After overloading unary minus operator"<<endl;
	n.display();
	getch();
}