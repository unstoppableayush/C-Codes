#include<iostream>
using namespace std;
int main()
{
	int a=20;
	int *p=&a;
	cout<<"a="<<a<<endl;
	cout<<"*p="<<*p<<endl;
	cout<<"&a="<<&a<<endl;
	cout<<"p="<<p<<endl;
	cout<<"&p="<<&p<<endl;
	cout<<"*p+a="<<*p+a<<endl;
	cout<<"p+a="<<p+a<<endl;
	return 0;
	
	
}
