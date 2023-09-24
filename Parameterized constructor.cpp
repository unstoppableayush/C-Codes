#include<iostream>
using namespace std;
class test 
{
	private:
		int a,b;
		public:
		test(int x,int y);       
		   	void putdata();
			
			
			
};
	test::test(int x,int y)
			{
				
				
				a=x;
				b=y;
			}
			
	void test::putdata()
			{
				cout<<"A="<<a<<endl;
				cout<<"B="<<b<<endl;
			}
int main()
{
	int m;
	int n;
	cout<<"Enter first number="<<endl;
	cin>>m;
	cout<<"Enter second number="<<endl;
 	cin>>n;
	test t1(m,n);
	t1.putdata();
	return 0;
}
