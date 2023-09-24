#include<iostream>
using namespace std;
class Student
{
	private:
		char name[20];
		int age;
		public:
			void input(char a[20],int b );
			void output();
			
};
void Student::input(char d[20] ,int c )
{
    name[20]=d[20];
    age=c;

}
void Student::output()
{
	cout<<"Name of student:"<<name<<endl;
	cout<<"Age of student:"<<age<<endl;
	
}
int main()
{
	Student obj;
	char a[20];
	int b;
	cout<<"Enter Name:";
	cin>>a[20];
	cout<<"Enter Age:"<<endl;
	cin>>b;
	
	obj.input(a,b);
	obj.output();
	return 0;
}
