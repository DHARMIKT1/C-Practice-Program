//array within class
#include<iostream.h>
#include<conio.h>
const int size=5;
class student
{
	int rno;
	int mark[size];
	int total;
		public:
			void getdata();
			void setdata();
};
void student::getdata()
{
	cout<<"Enter Roll Number:";
	cin>>rno;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter marks of subject"<<i+1<<":";
		cin>>mark[i];
	}
};
void student::setdata()
{
	total=0;
	cout<<"Student number is:"<<rno<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<"Subject "<<i<<"Mark is:"<<mark[i]<<endl;
		total=mark[i];
	}
	cout<<endl<<"Total is:"<<total;
}
void main()
{
	clrscr();
	student s;
	s.getdata();
	s.setdata();
	getch();
}