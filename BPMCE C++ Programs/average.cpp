//program to find the average 
#include<iostream>
using namespace std;
int main(){
    int n;
    float arr[n];
    
    cout<<"Enter the no. of element to find average: ";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    float sum=0;
    for(int i=0;i<n;i++){
        sum=sum + arr[i];
        
    }
    cout<<"Avergae of total elements is: "<<sum/n;
    return 0;

}