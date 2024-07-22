//Nested Class
#include<iostream.h>
#include<conio.h>
class A
{
	public:
		void dispA()
		{
			cout<<"Class A method call"<<endl;
		}
		class B
		{
			public:
				void dispB()
				{
					cout<<"B class method call";
				}

		};
};
void main()
{
	clrscr();
	A obja;
	obja.dispA();
	A::B obj;
	obj.dispB();
	getch();
}