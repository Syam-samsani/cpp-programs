#include<iostream>
using namespace std;
class B;
class A					//friend function
{
	private:
		int a;
	public:
		void data1()
		{
			cout<<"Enter a value=";
			cin>>a;
		}
		friend void compare(A,B);
};
class B
{
	private:
		int b;
	public:
		void data2()
		{
			cout<<"Enter b value=";
			cin>>b;
		}
		friend void compare(A,B);
};
void compare(A o1,B o2)
{
	if(o1.a<o2.b)
	{
		cout<<"a is less than b";
	}
	else if(o1.a>o2.b)
	{
		cout<<"a is greater than b";
	}
	else
	{
		cout<<"a is equal to b";
	}
};
main()
{
	A o1;
	B o2;
	o1.data1();
	o2.data2();
	compare(o1,o2);
}



