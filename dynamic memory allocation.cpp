#include<iostream>
using namespace std;
int main()
{
	int *p;
	float *q;
	char *r;
	p=new int(10);
	q=new float(1.5);
	r=new char('x');
	
 cout<<"value of p="<<*p<<endl;
 cout<<"value of q="<<*q<<endl;
 cout<<"value of r="<<*r<<endl<<endl;
 
 return 0;
 
	
}
