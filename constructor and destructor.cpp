#include<iostream>
using namespace std;
class test 
{
	private:
		int a,b;
		public:
		test();       
		   	void putdata();
			
			
			
};
	test::test()
			{
				a=10;
				b=20;
			}
			
	void test::putdata()
			{
				cout<<"A="<<a<<endl;
				cout<<"B="<<b<<endl;
			}
int main()
{
	test t1;
	t1.putdata();
	return 0;
}
