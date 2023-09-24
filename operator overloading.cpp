#include<iostream>
using namespace std;
class overloading
{
	private:
		int x, y;
		public:
			void input(int a, int b);
			void output();
			void operator -();
};
void overloading::input(int a,int b)
{
	x=a;
	y=b;
	
}
void overloading :: output()
{
	cout<<"X="<<x<<endl;
	cout<<"Y="<<y<<endl;
}
void overloading :: operator -()
{
	x=-x;
	y=-y;
	
}
int main()
{
	overloading obj;
	obj.input(5,6);
	obj.output();
	-obj;
	obj.output();
	return 0;
}
