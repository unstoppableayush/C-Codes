/*write a program of class and object*/
#include<iostream>

using namespace std;
class item
{
	private:
		int number;
		float price;
		public:
			void getdata(int a,float b);
			void putdata();
			
};
void item::getdata(int x,float y)
{
	cout<<"Item Number:"<<number<<endl;
	cout<<"Item price:"<<price<<endl;
}
int main()
{
	item obj;
	int a;
	int b;
	cout<<"Enter number for item1:"<<endl;
	cin>>a;
	cout<<"Enter Item price for item1:"<<endl;
	cin>>b;
	obj.getdata(a,b);
	obj.putdata();
	return 0;
	
}
