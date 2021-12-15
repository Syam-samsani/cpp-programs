#include<iostream>
using namespace std;
class details
{									//hybrid inheritance
	protected:
		string name;
		int number;
	public:
		void getdetails()
		{
			cout<<"Enter name=";
			cin>>name;
			cout<<"Enter roll number=";
			cin>>number;
		}
};
class marks:public details
{
	protected:
		int intermarks;
	public:
		void getmarks()
		{
			cout<<"Enter inter marks=";
			cin>>intermarks;
		}
		void displaymarks()
		{
			cout<<"Name="<<name;
			cout<<"Roll number="<<number;
			cout<<"Intermediate Marks="<<intermarks;
		}
};
class emarks
{
	protected:
		int eamcetmarks;
	public:
		void getemarks()
		{
			cout<<"Enter Eamcetmarks=";
			cin>>eamcetmarks;
		}
		void displayemarks()
		{
			cout<<"Eamcet marks="<<eamcetmarks;
		}
};
class fmarks:public marks,public emarks
{
	protected:
		float total1,total2,ftotal;
	public:
		void getfmarks()
		{
			total1=intermarks*0.25;
			total2=eamcetmarks*0.75;
			ftotal=total1+total2;
		}
		void total()
		{
			cout<<"Total"<<ftotal;
		}
		
};
main()
{
	fmarks o1;
	o1.getdetails();
	o1.getmarks();
	o1.getemarks();
	o1.getfmarks();
	o1.displaymarks();
	o1.displayemarks();
	o1.total();
}
