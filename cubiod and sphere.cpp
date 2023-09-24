//Write a program in c++ language to find the volume of a cubeoid and volume of a sphere using class and object
#include<iostream>
#include<math.h>
using namespace std;
class volume1
{
	private:
		int l,b,h;
		int vol1;
		public:
			void getdata1(int l,int b,int h);
			void putdata1();
		
};
void volume1::getdata1(int a,int c,int d)
{
	l=a;
	b=c;
	h=d;
}
void volume1::putdata1()
{
	cout<<"Enter length of cuboid:"<<l<<endl;
	cout<<"Enter breath of cuboid:"<<b<<endl;
	cout<<"Enter height of cuboid:"<<h<<endl<<endl;
	
	vol1=l*b*h;
	
	cout<<"**Volume of cuboid:"<<vol1<<"**"<<endl;
}
class volume2
{
	private:
		int r;
		int vol2;
		public:
			void getdata2(int r);
			void putdata2();
		
};
void volume2::getdata2(int k)
{
	r=k;
}
void volume2::putdata2()
{
	cout<<endl<<"Enter value of r:"<<endl;
	vol2=(4*3.14*pow(r,3))/3;
	cout<<"**Volume of sphere:"<<vol2<<"**"<<endl;

}
int main()
{
	volume2 obj1;
	volume1 obj;
	obj.getdata1(4,5,6);
	obj.putdata1();
	obj1.getdata2(4);
	obj1.putdata2();
	return 0;
}
