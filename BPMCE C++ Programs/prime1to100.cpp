#include<iostream>
using namespace std;
int main(){
    //prime no having 2 factors 1 & itself 
    for(int i=1;i<=100;i++){
        int cnt=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                cnt++;
            }
            
        }
        if(cnt==2){
                cout<<i<<endl;
            }
    }
}