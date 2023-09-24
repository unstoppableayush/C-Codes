// program to overload = operator to copy the contents of one string object to another string object.
#include<iostream>
using namespace std;
class String{
    private:
        string str="";
    public:
        void getString(){
            cout<<"Enter a string"<<endl;
            getline(cin,str);
        }
        void display(){
            cout<<"String="<<str<<endl;
        }
        string& operator=(string& st){
            str = st;
            return str;
        }
};
int main(){
    String obj1,obj2;
    obj1.getString();
    obj2.getString();
    cout<<"First String before using = Operator:"<<endl;
    obj1.display();
    obj1=obj2;
    cout<<"First String after using = Operator:"<<endl;
    obj1.display();
    return 0;
}
