#include<iostream>
using namespace std;
class samp{
    private :
    int a;
    public:
    samp(int n)
    {
        a=n;
    }
    friend void display(samp ob);
    
};
void display(samp ob)
{
    cout<<ob.a<<endl;
}
int main()
{
    samp ob(5);
    display(ob);
 
}
