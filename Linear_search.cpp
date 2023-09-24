#include<iostream>
using namespace std;
int main()
{
	int student[10];
	int num,i;
	cout<<"Enter the elements of array:"<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>student[i];
		
	}
	cout<<"Enter number which is to be search:"<<endl;
	cin>>num;
	for(i=0;i<10;i++)
	{
		if(num==student[i])
		{
			cout<<"Number is present.";
			break;
		}
		else if(i==9)
		{
			cout<<"Number is not present";
			
		}
	}
	return 0;
}
