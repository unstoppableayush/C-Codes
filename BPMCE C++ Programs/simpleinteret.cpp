//program to find simple interest
#include<iostream>
using namespace std;
int main(){
    float p ,r ,t;
    cout<<"Enter Principal:";
    cin>>p;
    cout<<"Enter rate :";
    cin>>r;
    cout<<"Enter Time in Year:";
    cin>>t;
    float si;
    si=(p*r*t)/100;
    cout<<"Simple interest is: "<<si;
    return 0;
}