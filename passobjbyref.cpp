#include <bits/stdc++.h>
using namespace std;

class myclass {
    int who;

public:
    myclass(int n) {
        who = n;
        cout << "Constructing " <<who<< endl;
    }

    ~myclass() {
        cout << "Destructing "<<who << endl;
    }

    int id() {
        return who;
    }
};

void f(myclass &o) {
    cout << "received " << o.id() << endl; // Call the id() method properly
}

int main() {
    myclass x(1);
    f(x);
    return 0;
}
