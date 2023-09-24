#include<iostream>
using namespace std;
int main()
{
	int student[10];
	int num,i,*ptr;
	ptr=student;
	
	cout<<"Enter the elements of array:"<<endl;
	for(i=0;i<10;i++)
	{
		cin>>student[i];
    }
	cout<<"enter number which is to be serach:"<<endl;
	cin>>num;	
	for(i=0;i<10;i++)
	{
		if(num==*ptr)
		{
		
		cout<<"Number is present."<<endl;
		break;}
	
	else if(i==9)
	{
		cout<<"Number is not present."<<endl;
	}
	ptr++;
   }
}
