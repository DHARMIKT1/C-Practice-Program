//Pure Virtual Function
#include<iostream.h>
#include<conio.h>
class shape
{
	protected:
		float d1,d2;
	public:
		shape(float d1,float d2)
		{
			this->d1=d1;
			this->d2=d2;
		}
		virtual void area()=0;
};
class triangle:public shape
{
	public:
		triangle(float b,float h):shape (b,h)
		{
		}
		void area()
		{
			cout<<"Area of triangle :"<<0.5*d1*d2<<endl;
		}
};
class rectangle:public shape
{
	public:
		rectangle(float l,float b):shape (l,b)
		{
		}
		void area()
		{
			cout<<"Area of rectangle :"<<d1*d2<<endl;
		}
};
void main()
{
	clrscr();
	shape *s1;
	triangle t(10,20);
	s1=&t;
	s1->area();
	rectangle r(10,20);
	s1=&r;
	s1->area();
	getch();
}