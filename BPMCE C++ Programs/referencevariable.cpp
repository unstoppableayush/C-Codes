#include<iostream>
using namespace std;
int main(){
    int a=10;
    int &b=a; // b is a refrence variable which points to same memory location of a
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<&a<<endl; //same
    cout<<&b<<endl;  //same
    return 0;
}