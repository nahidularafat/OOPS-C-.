#include <bits/stdc++.h>
using namespace std;
/*int x;
int &f(){

return x;
}

int main()
{

    f()=100;
    cout<<x<<endl;
    return 0;
}
*/
int &f(int &a){

return a;
}
int main()
{

    int x=10;
    f(x)=25;
    cout<<x<<endl;
    return 0;
}
