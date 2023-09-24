//program to find area and perimeter of rectangle
#include<iostream>
using namespace std;
int main(){
    float l , b ;
    cout<<"Enter the length and breath of rectangle:";
    cin>>l>>b;
    int ch;
    cout<<"Press 1 to find area and 2 to find perimeter:";
    cin>>ch;
    switch(ch){
        case 1:
            float area;
            area=l*b;
            cout<<"Area of rectangle is : "<<area;
            break;
        case 2:
            float peri;
            peri=2*(l*b);
            cout<<"Perimeter of Rectangle is: "<<peri;
            break;
        default:
            cout<<"Enter valid input!";
    }
    

    return 0;
}