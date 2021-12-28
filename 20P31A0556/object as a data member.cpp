#include<iostream>
using namespace std;
class studentdetails
{
	protected:
		string name;
		float percentage;
	public:
		void getdata()
		{
			cout<<"Enter name=";
			cin>>name;
			cout<<"Enter percentage=";
			cin>>percentage;
		}
		void display()
		{
			cout<<"Name="<<name<<endl;
			cout<<"Percentage="<<percentage<<endl;
		}
};
class rollnumber
{
	private:
		studentdetails d1;
		int rollnum;
	public:
		void getnumber()
		{
			d1.getdata();
			cout<<"Enter rollnumber=";
			cin>>rollnum;
		}
		void displaydetails()
		{
			d1.display();
			cout<<"Roll number="<<rollnum;
		}
};
main()
{
	rollnumber r1;
	r1.getnumber();
	r1.displaydetails();
}
