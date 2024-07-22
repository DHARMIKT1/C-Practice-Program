//After Before Swap
#include<iostream.h>
#include<conio.h>
class clsswap
{
	int a,b,temp;
		public:
			void getdata()
			{
				cout<<"Enter A:";
				cin>>a;
				cout<<endl<<"Enter B:";
				cin>>b;
			}
			void swapdata()
			{
				cout<<endl<<"Before Swap:"<<endl;
				cout<<"A = "<<a<<" "<<"B = "<<b;
				cout<<endl;
				temp=a;
				a=b;
				b=temp;
				cout<<"After Swap:"<<endl;
				cout<<"A = "<<a<<" "<<"B = "<<b;
			}
};
void main()
{
	clrscr();
	clsswap obj;
	obj.getdata();
	obj.swapdata();
	getch();
}