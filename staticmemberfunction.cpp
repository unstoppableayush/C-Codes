#include<iostream>
using namespace std;
class test
{
	private:
		int code;
		static int count;
		public:
			void setcode(int a);
			void showcode(void);
			static void showcount(void);
			
};
void test::setcode(int a)
{
	code=a;  
}
void test::showcode(void){
	cout<<"code:"<<code<<endl;
}
void test::showcount(void)
{
	cout<<"count"<<count<<endl;
}
int test::count;

int main()
{
	test obj;
	int a,x;
	cout<<"enter code:"<<endl;
	cin>>x;
	obj.setcode(x);
	obj.showcode()
	;
	test::showcount();
	return 0;
}

