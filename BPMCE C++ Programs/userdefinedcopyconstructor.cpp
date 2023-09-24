#include<iostream>
using namespace std;
class Alpha{
    private:
        int id;
    public:
        Alpha(){//default constuctor
            id=0;
        }
        Alpha(int x){//parametrized constructor
            id=x;
        }
        //userdefined copy constructor
        Alpha(Alpha &y){
            id=y.id;
        }
        void display(){
            cout<<"Id:"<<id<<endl;
        }
};
int main(){
    Alpha a(10); //calling parametrized constructor
    Alpha b(a); //calling userdefined copy constructor
    a.display();
    b.display();
    return 0;

}