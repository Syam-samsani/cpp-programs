#include<iostream>				//constructor and distructor
using namespace std;
class parent
{
	public:
		parent()
		{
			cout<<"Parent class Constructor called"<<endl;
		}
		~parent()
		{
			cout<<"Parent class distructor called"<<endl;
		}
};
class child:public parent
{
	public:
		child()
		{
			cout<<"Child class constructor called"<<endl;
		}
		~child()
		{
			cout<<"child class distructor called"<<endl;
		}
};
main()
{
	child o1;
}
