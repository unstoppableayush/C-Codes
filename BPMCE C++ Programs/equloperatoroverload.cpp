// program to overload = operator to copy the contents of one string object to another string object.
#include <iostream>
#include <string>

using namespace std;

class String {
private:
    string str;

public:
    String() { // default constructor
        str = "";
    }

    String(string s) { // constructor with string parameter
        str = s;
    }

    void display() { // display method to print the string
        cout << "String: " << str << endl;
    }

    String& operator=(const String& other) { // overloaded = operator
        str = other.str; // copy other's string to current object
        return *this; // return current object
    }
};

int main() {
    String s1("Hello"), s2("World");

    cout << "Before assignment:" << endl;
    s1.display();
    s2.display();

    s1 = s2; // use overloaded = operator

    cout << "After assignment:" << endl;
    s1.display();
    s2.display();

    return 0;
}
