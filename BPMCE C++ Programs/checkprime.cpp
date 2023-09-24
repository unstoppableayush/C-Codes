#include<iostream>
using namespace std;
bool isprime(int n){
    if(n<=0){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==1){
            return false;
        }
        
    }
    return true;
}
int main(){
    int num=10;
    if(isprime(num)){
        cout<<"Prime";
    }
    else{
        cout<<"NOt";
    }
    return 0;
}