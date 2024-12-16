#include <iostream>
using namespace std;

class Base {
public:
    int publicVar;

protected:
    int protectedVar;
};

class DerivedPublic : public Base {
public:
    void display()
    {
        cout << "Public variable: " << publicVar << endl;
        cout << "Protected variable: " << protectedVar << endl;
    }
};

int main() {
    DerivedPublic obj;

    obj.publicVar = 10;
    obj.display();

    return 0;
}
