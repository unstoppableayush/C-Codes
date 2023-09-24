
#include<iostream>
using namespace std;
class Point
{
	private:
		int x,y;
	public:
		Point(int a, int b)	// Parameterized Constructor- Decl & Def.
		{
			x=a;
			y=b;
		}
		Point(Point &p2)		// Copy Constructor
		{
			x=p2.x;
			y=p2.y;
		}
		void putdata()
		{
			cout<<"P1.x="<<x<<"   P1.y="<<y<<endl;
		}
		void display()
		{
			cout<<"P2.x="<<x<<"   P2.y="<<y;
		}
};

int main()
{
	Point p1(50,20); 	// Parametrized
	Point p2=p1;		// Copy
	p1.putdata();
	p2.display();
	
	return 0;
}
