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
		friend int swap(class1,class2);
	 
};

class class2
{
	private:
		int b;
		public:
			void getdata2(int y);
			friend int swap(class1,class2);
};
void class1::getdata1(int x)
{
	a=x;
	

}
void class2::getdata2(int y)
{
	b=y;
	
}
int swap(class1 obj11,class2 obj22)
{   
    
   obj11.a=obj11.a+obj22.b;
   obj22.b=obj11.a-obj22.b;
   obj11.a=obj11.a-obj22.b;
   cout<<"Swapped values="<<obj11.a<<","<<obj22.b;
}

int main()
{   int p;
    int q;
    cout<<"Enter first number="<<endl;
	cin>>p;
	cout<<"Enter second number="<<endl;
	cin>>q;
	class1 obj1;
	class2 obj2;
	obj1.getdata1(p);
	obj2.getdata2(q);
	swap(obj1,obj2);
	
	return 0;
}
