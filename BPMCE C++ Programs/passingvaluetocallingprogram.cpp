#include<iostream>
using namespace std;
void intfrac(float num,int &intpart,float &fracpart){
    intpart=(int)num;
    fracpart=num-intpart;
}
int main(){
    float real,fpart;
    int ipart;
    cout<<"Enter real value:"<<endl;
    cin>>real;
    intfrac(real,ipart,fpart);
    cout<<"Integer value:"<<ipart<<endl;
    cout<<"Fractional value:"<<fpart<<endl;
    return 0;
}