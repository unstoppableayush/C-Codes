//using friend function( flexible)
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
        friend ostream &operator <<(ostream &os,Time &t);
        friend istream &operator >>(istream &is,Time &t);
        

};
ostream &operator <<(ostream &os,Time &t){
            os<<t.h<<endl;
            os<<t.m<<endl;
            return os;
        }
istream &operator >>(istream &is,Time &t){ //overloading >> extraction operator
    is>>t.h;
    is>>t.m;
    return is;
}
int main(){
    Time tt(3,30);
    tt.display();
    cout<<tt<<"Total Time"<<endl;
    Time t,p;
    cout<<"Enter Time"<<endl;
    cin>>t;
    // t.display();
    cout<<"Entered Time"<<endl;
    cout<<t;
    return 0;
}