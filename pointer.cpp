#include<iostream>
using namespace std;
int main(){
	int a,*p=&a;//*p;
	cout<<"Enter any integer value:"<<endl;
	cin>>a;
	cout<<"Entered value="<<a<<endl;
	cout<<"**using pointer**"<<endl;
	//p=&a;
	cout<<"Entered value="<<*p<<endl;
	
	return 0;
}
