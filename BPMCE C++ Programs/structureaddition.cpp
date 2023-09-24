#include<iostream>
using namespace std;
struct Numchar{
    int a;
    int b;
    string c;
};

int main(){
    Numchar first,second,third;
    first.a=2;
    first.b=3;
    first.c='a';
    second.a=4;
    second.b=2;
    second.c='b';
    third.a=first.a+second.a;
    third.b=first.b+second.b;
    third.c=first.c+second.c;
    cout<<third.a<<" "<<third.b<<" "<<third.c;
    return 0;
}
