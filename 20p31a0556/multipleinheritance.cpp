#include<iostream>
using namespace std;
class details
{									//multiple inhertance
	protected:
		string name;
		int number;
		string branch;
		
};
class academics
{
	protected:
		float CGPA;
		
};
class grades:public details,public academics
{
	public:
		void getdetails()
		{
			cout<<"Enter name=";
			cin>>name;
			cout<<"Enter Roll number=";
			cin>>number;
			cout<<"Branch";
			cin>>branch;
			cout<<"Enter CGPA=";
			cin>>CGPA;
			display();
			if(CGPA>=8.0)
			{
				cout<<"Grade=A";
			}
			else if(CGPA>=7.0 && CGPA<80)
			{
				cout<<"Grade=B";
			}
			else if(CGPA>=6.0 && CGPA<7.0)
			{
				cout<<"Grade=C";
			}
			else
			{
				cout<<"FAIL";
			}
		}
		void display()
		{
			cout<<"Name="<<name<<endl;
			cout<<"Roll number="<<number<<endl;
			cout<<"Branch="<<branch<<endl;
			cout<<"CGPA="<<CGPA<<endl;
			
		}
};
main()
{
	grades o1;
	o1.getdetails();
	o1.display();
}
