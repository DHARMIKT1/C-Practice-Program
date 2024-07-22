//Virtual Base Class
#include<iostream.h>
#include<conio.h>
class Book
{
	protected:
		int b_id;
		char name[20];
	public:
		void getBook()
		{
			cout<<"Enter Book id:";
			cin>>b_id;
			cout<<"Enter Book Name:";
			cin>>name;
		}
		void showBook()
		{
			cout<<"Book id:"<<b_id<<endl;
			cout<<"Book Name:"<<name<<endl;
		}
};
class BookPrice:public virtual Book
{
	protected:
		double price;
	public:
		void getprice()
		{
			cout<<"Enter Book Price:";
			cin>>price;
		}
		void showprice()
		{
			cout<<"Book Price:"<<price<<endl;
		}
};
class Discount:virtual public Book
{
	protected:
		double d;
	public:
		void getdiscount()
		{
			cout<<"Enter Discount in (%):";
			cin>>d;
		}
		void showdiscount()
		{
			cout<<"Discount (%):"<<d<<endl;
		}
};
class publish:public BookPrice,public Discount
{
	double finalprice;
	char pub[50];
	public:
		void getDetail()
		{
			getBook();
			getprice();
			getdiscount();
			cout<<"Enter Publisher Name:";
			cin>>pub;
		}
		void showDetail()
		{
			showBook();
			showprice();
			showdiscount();
			finalprice=price-(price*d/100);
			cout<<"Final Price is:"<<finalprice<<endl;
			cout<<"Book Publisher Name:"<<pub<<endl;
		}
};
void main()
{
	clrscr();
	publish obj;
	obj.getDetail();
	obj.showDetail();
	getch();
}