#include<iostream>
using namespace std;
class  Counter{
    int count;
    public:
    Counter(){
        count=0;
    }
    Counter(int x){
        count=x;
    }
    int getValue(){
        return count;
    }
    Counter operator++(){
        ++count;
        Counter temp;
        temp.count=count;
        return temp;
    }
    Counter operator++(int){
        // count++;
        Counter temp;
        
        temp.count=count++;
        return temp;
    }
};
int main(){
    Counter c1 ,C3;
    ++c1 ;
    cout<<c1.getValue();
    Counter c2=c1++;
    cout<<c1.getValue();
    cout<<c2.getValue();
    Counter c5=C3++;
    cout<<c5.getValue();

    cout<<C3.getValue();

}