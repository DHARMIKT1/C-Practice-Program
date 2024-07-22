//Returning an object
#include<iostream.h>
#include<conio.h>
class number
{
	int no;
		public:
			void get_no(int n)
			{
				no=n;
			}
			void display()
			{
				cout<<"Number is:"<<no;
			}
			friend number sum (number n1,number n2)
			{
				number n3;
				n3.no=n1.no+n2.no;
				return n3;
			}
};
void main()
{
	clrscr();
	number x,y,z;
	x.get_no(10);
	y.get_no(10);
	z=sum(x,y);
	x.display();
	cout<<endl;
	y.display();
	cout<<endl;
	cout<<endl;
	z.display();
	getch();
}