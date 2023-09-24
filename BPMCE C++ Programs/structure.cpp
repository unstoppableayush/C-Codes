#include<iostream>
using namespace std;
struct Distance{
    int feet;
    float inch;
};
Distance adding(Distance,Distance);

int main(){
    Distance d1,d2,d3;
    cout<<"Enter the first distance in d1"<<endl;
    cin>>d1.feet>>d1.inch;
    cout<<"Enter the second distance in d2"<<endl;
    cin>>d2.feet>>d2.inch;
    d3=adding(d1,d2);
    cout<<"The value of d1 "<<d1.feet<<" "<<d1.inch<<endl;
    cout<<"The value of d2 "<<d2.feet<<" "<<d2.inch<<endl;
    cout<<"The value of d3 "<<d3.feet<<" "<<d3.inch<<endl;
}
Distance adding(Distance dd1,Distance dd2){
    Distance dd3;
    dd3.inch=dd1.inch+dd2.inch;
    dd3.feet=0;
    if(dd3.inch>=12){
        dd3.feet++;
        dd3.inch=dd3.inch-12;

    }
    dd3.feet=dd3.feet+dd1.feet+dd2.feet;
    return(dd3);
}