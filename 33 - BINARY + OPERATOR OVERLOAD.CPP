//Binary + Operator Overload
#include<iostream.h>
#include<conio.h>
class Number
{
	int a,b;
		public:
			void getdata(int x,int y)
			{
				a=x;
				b=y;
			}
			void display()
			{
				cout<<"A = "<<a<<endl;
				cout<<"B = "<<b<<endl;
			}
			Number operator +(Number n1)
			{
				Number n2;
				n2.a=a+n1.a;
				n2.b=b+n1.b;
				return n2;
			}
};
void main()
{
	clrscr();
	Number n;
	n.getdata(10,20);
	n.display();
	Number n3;
	n3.getdata(20,30);
	n3.display();
	Number obj;
	obj=n+n3;
	obj.display();
	getch();
}