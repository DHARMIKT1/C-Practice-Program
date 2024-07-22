//Manipulation of String Using Operator
#include<iostream.h>
#include<conio.h>
#include<string.h>
class string
{
	char *s;
	int length;
		public:
			string()
			{
				length=0;
				s=0;
			}
			string(char *a)
			{
				length=strlen(a);
				s=new char[length+1];
				strcpy(s,a);
			}
			void display()
			{
				cout<<"string is:"<<s<<endl;

			}
			friend void operator==(string s1,string s2);
			friend string operator+(string s1,string s2);
};
void operator==(string s1,string s2)
{
	if(strcmp(s1.s,s2.s)==0)
	{
		cout<<"Both string are same"<<endl;
	}
	else
	{
		cout<<"Both string are not same"<<endl;
	}
}
string operator+(string s1,string s2)
{


	string s3;
	s3.s=new char [s1.length + s2.length +1];
	strcpy(s3.s,s1.s);
	strcat(s3.s,s2.s);
	return s3;

}
void main()
{
	clrscr();
	string s1("SSSDIIT");
	string s2("SSSDIIT");
      //	string s3("GURUKUL");
	cout<<"Comparing s1 and s2"<<endl;
	s1==s2;
	cout<<"Comparing s1 and s3"<<endl;
	s1==s2;
	string s4;
       	s4=s1+" " +s2;
	s4.display();
	getch();

}
