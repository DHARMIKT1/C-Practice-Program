//Class
#include<iostream.h>
#include<conio.h>
class A
{
	class B
	{
		public:
			void showB()
			{
				cout<<"B class method"<<endl;
			}
	};
	public:
		void show()
		{
			B b;
			b.showB();
			cout<<"Class A method"<<endl;
		}
};
void main()
{
	clrscr();
	A a;
	a.show();
	getch();
}