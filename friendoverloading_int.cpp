#include<bits/stdc++.h>
using namespace std;


class car{

private :
    int x,y;
public:
    car(int x=0,int y=0)
    {

        this->x=x;
        this->y=y;
    }
    friend car operator +( car ob1,int i);
    void print()
    {

        cout<<x<<endl<<y<<endl;
    }


};

car operator +( car ob1,int i)
{
    car res;
    res.x = ob1.x+ i;
    res.y= ob1.y+ i;
    return res;

}


int main()
{
    car o(20,30), o2;
    o2=o+10;
    o2.print();

    return 0;

}
