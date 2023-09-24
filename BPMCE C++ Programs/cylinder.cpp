//program to find the area of cylinder
#include<iostream>
using namespace std;
int main(){
    float height;
    float bradius;
    float sarea;
    float tarea;
    float volume;

    cout<<"Enter the height of cylinder:"<<endl;
    cin>>height;
    cout<<"Enter the base radius of cylinder:"<<endl;
    cin>>bradius;

    int ch;
    cout<<"Enter 1 to find the surface area of cylinder ,"<<"\n"<<" 2 to find total surface area"<<endl
    <<" And 3 to find volume of cylinder :";
    cin>>ch;
    cout<<endl;

    switch(ch){
        case 1:
            sarea=2*3.14*bradius*height;
            cout<<"Surface area of Cylinder is : "<<sarea;
            break;
        case 2:
            tarea=2*3.14*bradius*(bradius+height);
            cout<<"Total surface area of Cylinder is : "<<tarea;
            break;

        case 3:
            volume=3.14*bradius*bradius*height;
            cout<<"Volume of cylinder is : "<<volume;
            break;
        default:
            cout<<"Enter Valid Input!!";

    }
}