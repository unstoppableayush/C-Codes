//flexible
#include <iostream>
using namespace std;
class Distance{
  int feet;
  float inch;
  public:
      Distance(){
        feet=0;
        inch=0;
      }
      Distance(int feet,int inch){
      this->feet=feet;
      this->inch=inch;
      }

      // Distance(float y){
      //   feet=int(y);
      //   inch=12*(y-feet);
      // }
     void display(){
     cout<<feet<<"  "<<inch<<"\n";
     }
     Distance operator +(Distance &obj){
       Distance temp;
       temp.inch=inch+obj.inch;
       if(temp.inch>12.0){
        temp.inch=temp.inch-12;
        temp.feet=1;
       }
       temp.feet=feet+temp.feet+obj.feet;
     return temp;
     }
      Distance operator +(float y){
       Distance h;
       int f=int(y);
       int i=(y-f)*12;
       h.inch=inch+i;
       if(h.inch>12){
        h.inch=h.inch-12;
        h.feet=1;
       }
       h.feet=feet+h.feet+f;
     return h;
     }
  friend Distance operator+(float y,Distance &h1);
};
 Distance operator+(float y,Distance &h1){
 Distance h;
       int f=int(y);
       int i=(y-f)*12;
       h.inch=h1.inch+i;
       if(h.inch>12){
        h.inch=h.inch-12;
        h.feet=1;
       }
       h.feet=h.feet+h1.feet+f;
     return h;
 }
int main()
{
  class Distance obj1,obj2(5,6),obj3,obj31,obj4;
  obj3=obj1+obj2;
  obj3.display();
  obj31=obj3+10.5;
  obj31.display();
  obj4=10.6+obj3;
  obj4.display();
    return 0;
}