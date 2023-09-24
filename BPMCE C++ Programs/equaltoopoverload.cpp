#include<iostream>
using namespace std;
template <typename T>
class Container {
private:
    T element;

public:
    Container(T value) : element(value) {}

    T getValue() const {
        return element;
    }

    void setValue(T value) {
        element = value;
    }
};
int main(){
        Container<int> intContainer(42);
    Container<double> doubleContainer(3.14);
    Container<std::string> stringContainer("Hello, World!");

    int intValue = intContainer.getValue();
    double doubleValue = doubleContainer.getValue();
    std::string stringValue = stringContainer.getValue();

    return 0;
}