#include<iostream>
using namespace std;
class Counter{
    private:
        int count;
    public:
        Counter(){
            count=0;
        }
        Counter(int n){
            count=n;
        }
        int getvalue(){
            return count;
        }
    //    void operator++ (){
    //         ++count;
    //     }
        Counter operator ++(){ //pre increment
            ++count;
            Counter temp;
            temp.count=count;
            return temp;
        }
        Counter operator ++(int){//post increment
            
            Counter temp;
            temp.count=count++;
            return temp;
        }

};
int main(){
    Counter c1,c2,c3;
    cout<<"The count="<<c1.getvalue()<<endl;
    cout<<"The Count="<<c2.getvalue()<<endl;
    ++c1;  
    ++c2;
    ++c2;
    c3++;
    cout<<"The count="<<c1.getvalue()<<endl;
    cout<<"The Count="<<c2.getvalue()<<endl;
    cout<<"The Count="<<c3.getvalue()<<endl;
    return 0;
}