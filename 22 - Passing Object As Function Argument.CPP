//Passing Object As Function Argument
#include<iostream.h>
#include<conio.h>
class number
{
	int no;
		public:
			void getno(int n)
			{
				no=n;
			}
			void display()
			{
				cout<<"Number is :"<<no;
			}
			void sum(number n1,number n2)
			{
				no=n1.no+n2.no;
			}
};
void main()
{
	clrscr();
	number x,y,z;
	x.getno(10);
	y.getno(20);
	z.sum(x,y);
	x.display();
	cout<<endl;
	y.display();
	cout<<endl;
	z.display();
	getch();
}