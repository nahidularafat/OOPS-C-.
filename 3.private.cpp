#include <bits/stdc++.h>
using namespace std;

class Circle {
  private:
    double radius;

  public:
    void setRadius(double r) {
        radius = r;
    }
    
    double calculateArea() {
        return radius * radius * 3.14;  
    }
};

int main() {
    Circle ob;
    ob.setRadius(10.43);  
    cout << "Area of the circle: " << ob.calculateArea() << endl;
    
    return 0;
}
