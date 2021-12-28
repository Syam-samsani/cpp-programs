#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
};
class B:virtual public A
{
	protected:
		int b;
};
class C:virtual public A
{
	protected:
		int c;
};
class D:public B,public C
{
	protected:
		int d;
	public:
		void input()
		{
			cout<<"Enter a,b,c,d Values=";
			cin>>a>>b>>c>>d;
			cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
		}
};
main()
{
	D o1;
	o1.input();
}
