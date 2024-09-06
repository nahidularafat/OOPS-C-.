#include <iostream>
using namespace std;

class Circle {
  private:
    double radius;

  public:
  
    void calculateArea(double r) {
        radius = r;
        double area = radius * radius * 3.14; 
        cout << "Area: " << area << endl;  
    }
};

int main() {
    Circle ob;
    ob.calculateArea(10.5);  
    return 0;
}
