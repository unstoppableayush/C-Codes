#include<iostream>
using namespace std;
class time
{
	int hours;
	int minutes;
	public:
		void gettime(int h,int m)
		{
			hours=h;
			minutes=m;
		}
		void puttime(void)
		{
			cout<<hours<<"hours and";
			cout<<minutes<<"minutes";
		}
		void sum(time,time);
		
};
void time::sum(time a,time b)
{
	minutes=a.minutes+b.minutes;
	hours=minutes/60;
	minutes=minutes%60;
	hours=hours+a.hours+b.hours;
}
int main()
{
	time t1,t2,t3;
	t1.gettime(3,40);
	t2.gettime(4,50);
	t3.sum(t1,t2);//objects as function arguments
	t1.puttime();
	cout<<"\n";
	t2.puttime();
	cout<<"\n";
	cout<<"-------\n";
	t3.puttime();
	return 0;
}
