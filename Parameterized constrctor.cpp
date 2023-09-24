#include<iostream>
using namespace std;
class point
{
	private:
		int x,y;
		public:
			point(int x1,int y1)   //parameterizes constructor
			{
				x=x1;
				y=y1;
			}
			int getX()
			{
				return x;
			}
			int getY()
			{
				return y;
			}
};
int main()
{
	point p1(10,15);      //constructor called
	
	//acess value assigned by costructor
	cout<<"p1.x="<<p1.getX()<<",p1.y="<<p1.getY();
	
	return 0;
}
	
	
	

