//class type to basic type
#include<iostream.h>
#include<conio.h>
class product
{
	int qty;
	float price;
	public:

		product(int q,float p)
		{
			qty=q;
			price=p;
		}
		void display()
		{
			cout<<"Quantity is:"<<qty<<endl;
			cout<<"Price is:"<<price<<endl;
		}
		operator float()
		{
			return qty * price;
		}
};
void main()
{
	clrscr();
	product p(10,12.35);
	p.display();
	float amount;
	amount=p;
	cout<<"Total Amount is:"<<amount<<endl;
	getch();
}
