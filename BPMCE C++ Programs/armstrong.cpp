#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num=153;
    int t1=num,length=0;
    while(t1!=0){
        t1=t1/10;
        length++;
    }
   
    int temp=0,rem,t2=num;
    while(t2!=0){
        rem=t2%10;
        temp=temp+(pow(rem,length));
        t2=t2/10;
    }
    if(num==temp){
        cout<<"Given number is armstrong";
    }
    else{
        cout<<"Number is not armstrong";
    }
    return 0;
}