#include <iostream>

class Point {
public:
  int x, y;
  
  Point() {
    x=0;
    y=0;
  }
  Point(int x, int y) {
    this->x=x;
    this->y=y;
  }

  // Overload the assignment operator
  Point& operator=(const Point& other) {
    x = other.x;
    y = other.y;
    return *this;
  }
};

int main() {
  Point p1(1, 2);
  Point p2(3, 4);

  p1 = p2; // using the overloaded assignment operator

  std::cout << "p1 = (" << p1.x << ", " << p1.y << ")" << std::endl;
  std::cout << "p2 = (" << p2.x << ", " << p2.y << ")" << std::endl;

  return 0;
}
