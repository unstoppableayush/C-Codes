#include<iostream>
using namespace std;
class sample
{
	int a,b;
	public:
		void setvalue()
		{
			a=25;
			b=40;
		}
		friend float mean(sample s);
};
float mean(sample s)
{
	return float(s.a+s.b)/2.0;
	//private data are accessing
}
int main()
{
	sample x;
	x.setvalue();
	cout<<"Mean value="<<mean(x);
	return 0;
}
