//not flexible
#include<iostream>
using namespace std;
class Distance{
    private:
        int feet;
        float inch;
    public:
        Distance(){
            feet=0;
            inch=0.0;
        }
        Distance(int f,float i){
            feet=f;
            inch=i;
        }
        void display(){
            cout<<"Feet:"<<feet<<endl;
            cout<<"Inch:"<<inch<<endl;
        }
        Distance operator+(Distance d){
            Distance temp;
            temp.inch=inch+d.inch;
            if(temp.inch>=12.0){
                temp.inch=temp.inch-12;
                temp.feet=1;
            }
            temp.feet=feet+temp.feet+d.feet;
            return temp;
        }
        Distance(float fd){
            feet=int(fd);
            inch=12*(fd-feet);
        }
    
};
int main(){
Distance d1(2,8);
Distance d2;
d2=d1+2.4;
d2.display();
}