#include<iostream>
using namespace std;
class Student
{
	private:
		int marks;
		int age;
		public:
			void input(int c,int d);
			void output();
			
};
void Student::input(int a,int b)
{
    marks=a;
    age=b;

}
void Student::output()
{
	cout<<"Marks of student:"<<marks<<endl;
	cout<<"Age of student:"<<age<<endl;
	
}
int main()
{
	Student obj;
	obj.input(90,37);
	obj.output();
	
	return 0;
}
