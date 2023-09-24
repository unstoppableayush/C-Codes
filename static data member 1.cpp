#include<iostream>
#include<conio.h>
using namespace std;
class item
{
static int count;
int number;
public:
void getdata(int a);
void putdata(void);
};
void item::getdata(int a)
{
number=a;
count++;
}
void item::putdata(void)
{
cout<<"Number="<<number<<endl;
cout<<"Count="<<count<<endl;
}
int item::count;
int main()
{
item obj1;
obj1.putdata();
obj1.getdata(100);
obj1.putdata();
getch();
return 0;
}
