#include<iostream>
using namespace std;
class Student
{
	private:
		char name[20];
		int age;
		public:
			void input(char ,int );
			void output();
			
};
void Student::input(char a[20] ,int b )
{
    name[20]=a[20];
    age=b;

}
void Student::output()
{
	cout<<"Name of student:"<<name<<endl;
	cout<<"Age of student:"<<age<<endl;
	
}
int main()
{
	char a[20];
	int b;
	cout<<"Enter Name:";
	cin>>a[20];
	cout<<"Enter Age:";
	cin>>b;
	Student obj;
	obj.input(a[20],b);
	obj.output();
	return 0;
}
