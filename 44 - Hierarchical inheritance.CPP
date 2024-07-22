#include<iostream>
#include<string.h>

using namespace std;

class demo
{
	public:
		void read()
		{
			cout<<"Enter a string : ";
			cin>>str_main;
		}

		void print()
		{
			cout<<"You	char str_main[20];r String is :"<<str_main<<endl;
		}

		demo operator+(demo str)
		{
			demo str1;
			strcpy(str1.str_main,str_main);
			strcpy(str1.str_main,str.str_main);
			return str1;
		}
};

int main()
{
	demo d1,d2,d3;
	d1.read();
	d2.read();
	d3=d1+d2;
	d3.print();
	return 0;
}