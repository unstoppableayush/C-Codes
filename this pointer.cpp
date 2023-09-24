#include<iostream>
using namespace std;
class Test
{
	int a,b;
public:
	void show()
	{
		a=10;
		b=20;
		cout<<"Obj Addr="<<this<<endl;//returing current object adress
		cout<<"a="<<this->a<<endl;//value of a using this pointer
		cout<<"b="<<this->b;//value of b using this pointer

	}

};
int main()
	{
		Test t;
		t.show();
		return 0;
	}