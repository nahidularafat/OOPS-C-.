#include<bits/stdc++.h>
using namespace std;
class samp
{
    public:
    int i,j;
    void set_i(int a,int b)
    {
        i=a;
        j=b;
    }
    int get()
    {
        return i*j;
    }
};
int main()
{
    samp *p;
    p = new samp;
    if(!p)
    {
        cout<<"allocation error"<<endl;
        return 1;
    }
    p-> set_i(4,5);

    cout<< p->get()<<endl;
    delete p;

}
