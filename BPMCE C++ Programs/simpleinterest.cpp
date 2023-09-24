//in function class 
#include<iostream>
using namespace std;
float simple(float x,float y,float z);
int main(){
    float p,r,t,interest;
    cout<<"Enter the value of P, R, T :"<<endl;
    cin>>p>>r>>t;
    interest=simple(p,r,t);
    cout<<"Simple Interest is : "<<interest;
    return 0;
}
float simple(float x, float y , float z){
    float cal;
    cal=(x*y*z)/100;
    return (cal);
}