//Multilevel Inheritance
#include<iostream.h>
#include<conio.h>
class Book
{
	protected:
		int b_id;
		char *b_name;
	public:
		void getdata()
		{
			cout<<"Enter Book id:";
			cin>>b_id;
			cout<<"Enter Book Name:";
			cin>>b_name;
		}
		void showBook()
		{
			cout<<"Book id is:"<<b_id<<endl;
			cout<<"Book Name is:"<<b_name<<endl;
		}
};
class Bookprice:public Book
{
	protected:
		float price;
	public:
		void getprice()
		{
			cout<<"Enter Price:";
			cin>>price;
		}
		void showprice()
		{
			cout<<"Price is:"<<price<<endl;
		}
};
class Bookauthor:public Bookprice
{
	char * author;
	public:
		void getauthor()
		{
			cout<<"Enter Author Name:";
			cin>>author;
		}
		void show()
		{
			showBook();
			showprice();
			cout<<"Book Author is:"<<author<<endl;
		}
};
void main()
{
	clrscr();
	Bookauthor obj;
	obj.getdata();
	obj.getprice();
	obj.getauthor();
	obj.show();
	getch();
}