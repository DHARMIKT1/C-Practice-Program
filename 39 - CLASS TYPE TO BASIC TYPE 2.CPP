//class type to basic type
#include<iostream.h>
#include<conio.h>
class test
{
	float f;
	public:
		test(float x)
		{
			f=x;
		}
		void disp()
		{
			cout<<"Float is="<<f<<endl;
		}
		operator int()
		{
			return (int)f;
		}
};
void main()
{
	clrscr();
	int i;
	test t(12.74);
	t.disp();
	i=t;
	cout<<"Value of i is:"<<i<<endl;
	getch();
}