//Binary operator overload using friend function
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
		friend Number operator + (Number n1,Number n2);
};
Number operator + (Number n1,Number n2)
{
	Number n3;
	n3.a=n1.a+n2.a;
	n3.b=n1.b+n2.b;
	return n3;
}
void main()
{
	clrscr();
	Number obj1,obj2,obj3;
	obj1.getdata(10,20);
	cout<<"First Object Value"<<endl;
	obj1.display();
	obj2.getdata(20,30);
	cout<<"Second Object Value"<<endl;
	obj2.display();
	obj3=obj1+obj2;
	cout<<"Third Object Value"<<endl;
	obj3.display();
	getch();
}