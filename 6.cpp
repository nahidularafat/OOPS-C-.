// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Rectangle
{
    int length;
    int width;
    
    public:
    void set(int l,int w)
    {
        length =l;
        width = w;
    }
    
    int calculate()
    {
        return length*width*3.1416;
    }
    int par1()
    {
        return length;
    }
    int par2()
    {
        return width;
    }
    
};

int main() {
    Rectangle ob;
    ob.set(20,30);
  cout<<ob.calculate() <<endl;
  cout<<ob.par1()<<endl;
  cout<<ob.par2()<<endl;
  
    return 0;
}
