#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter array size:";
	cin>>n;
	int *p=new int[n];
	for(int i=0;i<n;i++)
	cin>>p[i];     //or cin>>(p+i);
	
	cout<<"Elements are";
	for(int i=0;i<n;i++) cout<<p[i]<<endl;    //or cin>>*(p+i);
	
	delete p;
	
	
	return 0;
}
