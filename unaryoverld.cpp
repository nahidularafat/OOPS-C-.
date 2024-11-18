#include<bits/stdc++.h>
using namespace std;
class dis{
private :
    int feet,inch;
public:
    dis(int f,int i)
    {

        feet=f;
        inch =i;
    }
    void operator -()
    {
        feet--;
        inch--;
        cout<<feet<<" "<<inch<<endl;

    }

};
int main()
{
    dis d1(8,9);
    -d1;
    return 0;

}
