//program to find area of cone

#include<iostream>
using namespace std;
int main(){
    float slanth;
    float radius;
    
    cout<<"Enter the slant height of cone:";
    cin>>slanth;
    cout<<"Enter the radius of cone:";
    cin>>radius;
    
    int ch;
    cout<<"Enter 1 to calculate curved surface area of cone or enter 2 to calculate total surface area:"<<endl;
    cin>>ch;

    switch(ch){
        case 1: 
            float carea;
            carea= 3.14 * radius * slanth;
            cout<<"Curved surface area of cone is : "<<carea;
            break;
        case 2:
            float tarea;
            tarea= 3.14*radius*(radius + slanth);
            cout<<"Total Surface Area of Cone is : "<<tarea;
            break;
        default:
            cout<<"Enter valid input !!";
    }

    return 0;
}