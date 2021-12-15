#include<iostream>
using namespace std;
class details					//multilevel inheritance
{
	protected:
		string name;
		int number;
};
class marks:public details
{
	protected:
		int s1,s2,s3,s4,s5;
};
class final:public marks
{
	protected:
		int total;
		float average;
	public:
		void getdetails()
		{
			cout<<"Enter name=";
			cin>>name;
			cout<<"Enter rollnumber=";
			cin>>number;
			cout<<"Enter marks  of 5 subjects=";
			cin>>s1>>s2>>s3>>s4>>s5;
			total=s1+s2+s3+s4+s5;
			average=total/5;
		}
		void display()
		{
			cout<<"Name="<<name<<endl;
			cout<<"Roll Number="<<number<<endl;
			cout<<"s1="<<s1<<endl;
			cout<<"s2="<<s2<<endl;
			cout<<"s3="<<s3<<endl;
			cout<<"s4="<<s4<<endl;
			cout<<"s5="<<s5<<endl;
			cout<<"Total="<<total<<endl;
			cout<<"Average="<<average;			
		}
};
main()
{
	final o1;
	o1.getdetails();
	o1.display();
}
