#include<iostream>
using namespace std;
void swapv(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
void swapr(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
void swapa(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int val1,val2;
    cout<<"Enter value 1st and 2nd value"<<endl;
    cin>>val1>>val2;

    cout<<"Default value"<<endl;
    cout<<val1<<" "<<val2<<endl;

    cout<<"After pass by value"<<endl;
    swapv(val1,val2);
    cout<<val1<<" "<<val2<<endl;

    cout<<"After pass by refrence"<<endl;
    swapr(val1,val2);
    cout<<val1<<" "<<val2<<endl;

    cout<<"After pass by "<<endl;
    swapa(&val1,&val2);
    cout<<val1<<" "<<val2<<endl;

    return 0;

}