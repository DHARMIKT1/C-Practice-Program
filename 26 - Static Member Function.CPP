//Static Member Function
#include<iostream.h>
#include<conio.h>
class test
{
	static int count;
	int code;
	public:
		void setcode()
		{
			code=++count;
		}
		void showcode()
		{
			cout<<"obj Number is"<<code<<endl;
		}
		static void showcount()
		{
			cout<<"count is:"<<count<<endl;
		}
};
int test::count;
void main()
{
	clrscr();
	test t1,t2;
	t1.setcode();
	t2.setcode();
	test::showcount();
	test t3;
	t3.setcode();
	t1.showcode();
	t2.showcode();
	t3.showcode();
	getch();
}