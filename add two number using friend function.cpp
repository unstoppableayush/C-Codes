#include<iostream>
#include<conio.h>
using namespace std;
class class2;
class class1
{
	private:
	int a;
	public:
		void getdata1(int x);
		friend int add(class1,class2);
	 
};

class class2
{
	private:
		int b;
		public:
			void getdata2(int y);
			friend int add(class1,class2);
};
void class1::getdata1(int x)
{
	a=x;

}
void class2::getdata2(int y)
{
	b=y;
}
int sum(class1 obj11,class2 obj22 )
{
	
	
	return(obj11.a+obj22.b);
}

int main()
{
	class1 obj1;
	class2 obj2;
	obj1.getdata1(5);
	obj2.getdata2(3);
	int add=sum(obj1,obj2);
	cout<<"SUM="<<add;
	return 0;
}
