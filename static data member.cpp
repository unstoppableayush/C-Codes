#include<iostream>
using namespace std;
class cse
{
	private:
		static int number1;
		int number2;
		public:
			void getnumber(int a);
			void putnumber();
			
	
};
void cse::getnumber(int a){
	number2=a;
	number1++;
}
void cse::putnumber()
{
	cout<<"number1:"<<number1<<endl;
	cout<<"number2:"<<number2<<endl;
}
int cse::number1;
int main()
{
	cse obj;
	obj.getnumber(2);
	obj.putnumber();
	
	
	return 0;
	
	
	
}

