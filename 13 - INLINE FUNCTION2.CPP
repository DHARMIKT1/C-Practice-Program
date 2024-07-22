//inline function
#include<iostream.h>
#include<conio.h>
class operation
{
	int a,b,add,nul,sub;
		float div;
			public:
				void get();
					void sum();
						void difference();
							void product();
								void division();
};
inline void operation::get()
{
	cout<<"Enter A:";
	cin>>a;
	cout<<"Enter B:";
	cin>>b;
}
inline void operation::sum()
{
	add=a+b;
	cout<<"Additional is:"<<add<<endl;
}
inline void operation::difference()
{
	sub=a-b;
	cout<<"Subtraction is:"<<sub<<endl;
}
inline void operation::product()
{
	nul=a*b;
	cout<<"Multiplication is:"<<nul<<endl;
}
inline void operation::division()
{
	div=(float)a/b;
	cout<<"Division is:"<<div<<endl;
}
void main()
{
	operation s;
	clrscr();
	s.get();
	s.sum();
	s.difference();
	s.product();
	s.division();
	getch();
}