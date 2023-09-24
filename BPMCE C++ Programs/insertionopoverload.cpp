//using friend function(not flexible)
#include<iostream>
using namespace std;
class Time{
    private:
    int h;
    int m;
    public:
        Time(){
            h=m=0;
        }
        Time(int h1,int m1){
            h=h1;
            m=m1;
        }
        void display(){
            cout<<"Hours:"<<h<<endl;
            cout<<"Minutes:"<<m<<endl;
        }
        friend void operator <<(ostream &os,Time &t){
            os<<t.h<<endl;
            os<<t.m<<endl;
        }

};
int main(){
    Time tt(3,30);
    tt.display();
    cout<<tt;
    // cout<<tt<<"Total Time";   -> Not give output
    return 0;
}