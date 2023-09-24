//program to find profit and loss
#include<iostream>
using namespace std;
int Profit(int cp1,int sp1){
    int profit=(sp1-cp1);
    return profit;
}
int Loss(int cp, int sp){
    int loss = (cp-sp);
    return loss;
}
int main(){
    int sp;
    int cp;
    cout<<"Enter Cost Price :";
    cin>>cp;
    cout<<"Enter Selling Price : ";
    cin>>sp;
    if(cp==sp){
        cout<<"No Profit or Loss !";
    }
    else if(cp>sp){
        cout<<Loss(cp,sp)<<" Loss ";
    }
    else if(sp>cp){
        cout<<Profit(cp,sp)<<" Profit ";
    }
    return 0;
    
}