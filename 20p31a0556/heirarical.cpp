#include<iostream>
using namespace std;
class values						//heirarical inheritance
{
	protected:
		int a,b;
	public:
		void getdetails()
		{
			cout<<"Enter a,b values=";
			cin>>a>>b;
		}
};
class add:public values
{
	protected:
		int addition;
	public:
		void getaddition()
		{
			addition=a+b;
			cout<<"The addition of a & b is="<<addition<<endl;
		}
};
class multi:public values
{
	protected:
		int product;
	public:
		void getmultiplication()
		{
			product=a*b;
			cout<<"The product of a & b is ="<<product;
		}
};
main()
{
	add o2;
	o2.getdetails();
	o2.getaddition();
	multi o3;
	o3.getdetails();
	o3.getmultiplication();
}
