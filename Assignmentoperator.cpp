#include <bits/stdc++.h>
using namespace std;

class car {
private:
    int x, y;

public:
    // Default constructor
    car() : x(0), y(0) {}

    // Input data from the user
    void datauser() {
        cin >> x >> y;
    }

    // Overload assignment operator
    car& operator=(const car& ob) {
        if (this != &ob) { // Avoid self-assignment
            x = ob.x;
            y = ob.y;
        }
        return *this;
    }

    // Print values
    void print() const {
        cout << x << endl << y << endl;
    }
};

int main() {
    car o1, o2;
    o1.datauser(); // Input data for o1
    o2 = o1;       // Use assignment operator
    o2.print();    // Print o2's values

    return 0;
}
