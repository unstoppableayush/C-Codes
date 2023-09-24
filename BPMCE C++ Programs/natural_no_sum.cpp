//program to calculate sum of n natural no
#include<iostream>
using namespace std;
int main(){
    int n , i ,sum=0;
    cout<<"Enter the no to calculate sum of natural no: ";
    cin>>n;
    for(int i=0; i<=n ; i++){
        sum=sum+i;
    }
    cout<<"Sum of firstc"<<n<<" natural no. is: "<<sum;
    return 0;
}