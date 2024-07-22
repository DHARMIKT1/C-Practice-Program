//class type to class type conversion
#include<iostream.h>
#include<conio.h>
class shop1
{
	int code,qty;
	float price;
	public:
		shop1(int c,int q,float p)
		{
			code=c;
			qty=q;
			price=p;
		}
		int getcode()
		{
			return code;
		}
		int getqty()
		{
			return qty;
		}
		float getprice()
		{
			return price;
		}
		void display()
		{
			cout<<"Shop 1 Details"<<endl;
			cout<<"Code is:"<<code<<endl;
			cout<<"Quantity is:"<<qty<<endl;
			cout<<"Price is:"<<price<<endl;
		}
};
class shop2
{
	int code;
	float amount;
	public:
		shop2(int c,float a)
		{
			code=c;
			amount=a;
		}
		void display()
		{
			cout<<"Shop 2 Details is:"<<endl;
			cout<<"Item Code is:"<<code<<endl;
			cout<<"Amount is:"<<amount<<endl;
		}
		shop2 (shop1 s1)
		{
			code=s1.getcode();
			amount=s1.getqty() * s1.getprice();
		}
};
void main()
{
	clrscr();
	shop1 s1(111,5,24.5);
	shop2 s2=s1;
	s1.display();
	s2.display();
	getch();
}