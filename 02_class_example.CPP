//class
#include<iostream.h>
#include<conio.h>
class clsstudent
{
	int a;
		public:
			void get()
			{
				cout<<"Enter A:";
				cin>>a;
			}
			void put()
			{
				cout<<endl<<"Value of A is:"<<a;
			}
};
void main()
{
	clrscr();
	clsstudent obj;
	obj.get();
	obj.put();
	getch();
}
