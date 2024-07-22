//String
#include<iostream.h>
#include<conio.h>
#include<string.h>
class cons
{
	char * s;
		public:
			cons(char * t)
			{
				s=new char[10];
				s=t;
			}
			void display()
			{
				cout<<"String is:"<<s;
			}
};
void main()
{
	char * str;
	clrscr();
	cout<<"Enter String:";
	get (str);
	cons t (str);
	t.display();
	getch();
}