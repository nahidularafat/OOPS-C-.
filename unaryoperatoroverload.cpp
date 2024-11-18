
#include<bits/stdc++.h>
using namespace std;

class Distance {
public:
    int feet, inch;


    Distance(int f, int i) {
        feet = f;
        inch = i;
    }


    void operator-() {
        feet--;
        inch--;




        cout << feet << " ' " << inch << endl;
    }
};

int main() {
    Distance d(8, 10);
    -d;
    return 0;
}
