#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *p;
    p = new int;

    *p=24;
    cout<<*p;
    delete p;
    return 0;
}
