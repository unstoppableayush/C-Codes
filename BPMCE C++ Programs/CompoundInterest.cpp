//program to find compound interest
#include<iostream>
#include<math.h>
using namespace std;
int main(){

    float principal;
    float rate;
    float time;
        
    cout<<"Enter Principal:";
    cin>>principal;
    cout<<"Enter rate:";
    cin>>rate;
    cout<<"Enter time in year:";
    cin>>time;

    float amount;
    amount=principal*((pow((1+rate/100),time)));
    float ci=amount-principal;

    cout<<"Compound Interest is :"<<ci;

}