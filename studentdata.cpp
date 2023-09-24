#include<iostream>

using namespace std;
class student
{
	private:
		char name[20];
		char branch[20];
		int rollnumber;
		int sem;
		public:
			void getdata(char c[10],char d[10],int a,int b);
			void putdata();
			
};
void student::getdata(char e[10],char f[10],int x,int y)
{
	name=e;
	branch=f;
	rollnumber=x;
	sem=y;
	
}
void student::putdata()
{
	
        cout<<"student name:"<<name<<endl; 
        cout<<"Student Roll Number:"<<rollnumber<<endl;
		cout<<"student branch:"<<branch<<endl;
		cout<<"student sem:"<<sem<<endl;
	
 } 
 int main()
 {
 	student std[5];
 	string e;
 	string f;
 	int a;
 	int b;
 	for(int i=0;i<5;i++)
 	{
 		cout<<"Enter name of student"<<i+1<<":";
 		cin>>"e";
 		cout<<"Enter branch of student"<<i+1<<":";
 		cin>>"f";
 		cout<<"Enter roll number of student"<<i+1<<":";
 		cin>>a;
 		cout<<"Enter semester of student"<<i+1<<":";
 		cin>>b;
 		std[i].getdata("e","f",a,b);
 		
	 }
	 for(int j=0;j<5;j++)
	 {
	 	cout<<"Details for student"<<j+1<<endl;
	 	std[j].putdata();
	 }
	 return 0;
 }
