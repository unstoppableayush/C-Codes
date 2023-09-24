#include<iostream>
using namespace std;

int func_array(int num[],int n);
int main(){
    int arr[10],i,sum;
    cout<<"Enter the 10 integer values in Array"<<endl;
    for(i=0;i<10;i++){
        cin>>arr[i];
    }
    sum=func_array(arr,10);
    cout<<"The sum of Array elements is : "<<sum;
    return 0;
}
int func_array(int num[],int n){
    int total=0,i;
    for(i=0;i<n;i++){
        total=total+num[i];
    }
    return (total);
}