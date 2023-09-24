#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float p,r,t;
	float ci,si;
	cout<<"Enter principal value:"<<endl;
	cin>>p;
	cout<<"Enter the rate of interest:"<<endl;
	cin>>r;
	cout<<"Enter time taken:"<<endl;
	cin>>t;
	
	si=(p*r*t)/100;
	ci=p*pow(1+(r/100),t)-p;
	
	
	cout<<"Simple interest:"<<si<<endl;
	cout<<"Compound interest:"<<ci<<endl;
	
	return 0;
	
}
