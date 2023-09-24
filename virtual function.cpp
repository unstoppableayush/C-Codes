#include<iostream>
using namespace std;
class Base{
	public:
		virtual void display()
		{
			cout<<"Display Base"<<endl;
		}
		virtual void show()
		{
			cout<<"Show Base"<<endl;
		}
};
class Derived:public Base
{
	public:
		void display(){
			cout<<"Display Derived"<<endl;
		}
		void show(){
			cout<<"Show derived"<<endl;
		}
};
int main()
{
	Base b;
	Derived d;
	Base *bptr;
	bptr=&b;
	bptr->display();
	bptr->show();
	Derived *dptr;
	dptr=&d;
	dptr->display();
	dptr->show();
	return 0;
	
}
