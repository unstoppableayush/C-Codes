#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  cout << "Please enter your name" << endl;
  getline(cin, name);
  cout << "Hi, " << name << "!" << endl;
}
