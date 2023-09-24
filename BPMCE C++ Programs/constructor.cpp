#include<iostream>
using namespace std;
class Distance{
    private:
        float inch;
        int feet;
    public:
        Distance(){
            inch=0.0;
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
        void adddist(Distance dd1,Distance dd2){  
            inch=dd1.inch+dd2.inch;
            if(inch>=12){
                feet++;
                inch=inch-12;
            }
            feet=dd1.feet+dd2.feet+feet;
        }
};
int main(){
    cout<<"Default Constructor:"<<endl;
    Distance d1;
    d1.display();
    cout<<"parameterized Constructor:"<<endl;
    Distance d2(3,2.3); 
    d2.display();

    Distance dist1(3,5),dist2(4,8),dist3;
    dist3.adddist(dist1,dist2); //default copy constructor calls
    cout<<"Dist1"<<endl;
    dist1.display();
    cout<<"Dist2"<<endl;
    dist2.display();
    cout<<"Dist3=Dist1+Dist2"<<endl;
    dist3.display();
    return 0;
}