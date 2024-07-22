//Unary Operator Overload Using Friend Keyword
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
		friend void operator -(Numebr &n1);
};
void operator -(Number &n1)
{
	n1.a=-n1.a;
	n1.b=-n1.b;
}
void main()
{
	clrscr();
	Number n;
	n.getnumber(10,20);
	n.display();
	cout<<endl<<"After Unary Minus Operator Overload"<<endl;
	-n;
	n.display();
	getch();
}