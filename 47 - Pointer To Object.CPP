//Pointer To Object
#include<iostream.h>
#include<conio.h>
class student
{
	int r_no;
	float per;
	public:
		void input(int r,int p)
		{
			r_no=r;
			per=p;
		}
		void display()
		{
			cout<<"Roll Number:"<<r_no<<endl;
			cout<<"Percantage:"<<per<<endl;
		}
};
void main()
{
	clrscr();
	int i;
	int r;
	int p;
	student *s=new student[3];
	student *temp=s;
	for(i=0;i<3;i++)
	{
		cout<<"Enter Roll Number:";
		cin>>r;
		cout<<"Enter Percantage:";
		cin>>p;
		s->input(r,p);
		s++;
	}
	for (i=0;i<3;i++)
	{
		temp->display();
		temp++;
	}
	getch();
}
