/*#include<bits/stdc++.h>
using namespace std;

void f ( int *n)
{

    *n=199;
}
int main()
{
    int i =0;
    f(&i);


        cout<<i<<endl;


}
*/

#include<bits/stdc++.h>
using namespace std;

void f ( int &n)
{

    n=199;
}
int main()
{
    int i =0;
    f(i);


        cout<<i<<endl;


}
