#include<iostream>
using namespace std;

class test
{
	private:
		int a,b;
		public:
			void getvalue(int x,int y);
			friend float mean(test t2);
			
};
void test::getvalue(int x,int y)
{
	a=x;
	b=y;
}
float mean(test t2)
{
	return(float(t2.a+t2.b)/2);
	
}
int main()
{
	test t1;;
	t1.getvalue(5,4);
	float x=mean(t1);
	cout<<"Mean:"<<x;
	return 0;
}
