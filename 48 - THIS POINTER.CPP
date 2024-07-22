//this pointer
#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
	int r_no;
	float per;
	public:
		char *name;
		student (int r_no,float per,char *name)
		{
			this->r_no=r_no;
			this->per=per;
			strcpy(this->name,name);
		}
		student higher(student &s)
		{
			if(per>s.per)
			{
				return *this;
			}
			else
			{
				return s;
			}
		}
		void display()
		{
			cout<<"Roll Number:"<<r_no<<endl;
			cout<<"Percantage:"<<per<<endl;
			cout<<"Name:"<<name<<endl;
		}
};
void main()
{
	clrscr();
	student s1(1,68.67,"Raj");
	student s2(2,40.12,"Yash");
	s1.display();
	s2.display();
	student s3=s1.higher(s2);
	cout<<"Student With More Percantage:"<<s3.name;
	getch();
}