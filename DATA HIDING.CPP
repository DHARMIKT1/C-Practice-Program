//Data Hiding
#include<iostream.h>
#include<conio.h>
class Base
{
	int num;
	public:
		void getData();
		void showData();
};
void Base::getData()
{
	cout<<"Enter Any Integer Vlaue:"<<endl;
	cin>>num;
}
void Base::showData()
{
	cout<<"The Value Is:"<<num<<endl;
}
void main()
{
	clrscr();
	Base obj;
	obj.getData();
	obj.showData();
	getch();
}