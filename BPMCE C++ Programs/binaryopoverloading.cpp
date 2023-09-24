#include<iostream>
using namespace std;
class Distance{
    private:
        int feet;
        float inch;
    public:
        Distance(){
            inch=0;
            feet=0;
        }
        Distance(int x,float y){
            feet=x;
            inch=y;
        }
        void display(){
            cout<<"Feet:"<<feet<<endl;
            cout<<"Inch:"<<inch<<endl;
        }
        Distance operator +(Distance d){
            Distance temp;
            temp.inch=inch+d.inch;
            if(temp.inch>=12.0){
                temp.inch=temp.inch-12.0;
                temp.feet=1;
            }
            temp.feet=feet+temp.feet+d.feet;
            return temp;
        }
};
int main(){
    Distance dist1(2,8.5),dist2(4,8.8),dist3;
    dist3=dist1+dist2;
    // dist1.operator+(dist2);
    dist3.display();
    return 0;
}