#include<iostream>
using namespace std;
class samp{
    private :
    int a;
    int b;
    public:
    samp(int n, int k)
    {
        a=n;
        b=k;
    }
    int get_a()
    {
        return a;
    }
    int get_b()
    {
        return b;
    }
    
};
int main()
{
    samp ob[3] =
    {
        samp(2,4),
        samp(5,6),
        samp(6,9)
    };
    
    samp *p;
    p= ob;
    
    for(int i=0;i<3;i++)
    {
        cout<<p->get_a()<<endl<<p->get_b()<<endl;
        p++;
    }
    cout<<endl;
}
