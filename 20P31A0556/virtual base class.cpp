#include<iostream>
using namespace std;
class A
{
	protected:
		int a,b;
};
class B:virtual public A
{
	protected:
		int c,d;
};
class C:virtual public A
{
	protected:
		int e,f;
};
class D:public B,public C
{
	protected:
		int g,h,i;
	public:
		void input()
		{
			cout<<"Enter a,b,c,d,e,f Values:";
			cin>>a>>b>>c>>d>>e>>f;
		}
		void getdata()
		{
			g=a+b;
			h=c-d;
			i=e*f;
		}
		void output()
		{
			cout<<g<<endl;
			cout<<h<<endl;
			cout<<i<<endl;
		}
};
main()
{
	D o1;
	o1.input();
	o1.getdata();
	o1.output();
}

