#include<iostream>
using namespace std;
class time
{
	private:
		int hour;
		int minute;
		
	public:
		void gettime(int h,int m);
		void puttime();
		void sum(time,time);

};
void time::gettime(int h,int m)
{
	hour=h;
	minute=m;
}
void time::puttime()
{
	cout<<hour<<" hours,"<<minute<<"  minutes"<<endl;
}
void time::sum(time x,time y)
{
	
	minute=x.minute+y.minute;
	hour=minute/60;
	minute=minute%60;
	hour=hour+x.hour+y.hour;
	
	
}

int main()
{
	
time t1,t2,t3;
t1.gettime(3,40);
t2.gettime(2,30);
t1.puttime();
t2.puttime();
t3.sum(t1,t2);
t3.puttime();
	return 0;
}



