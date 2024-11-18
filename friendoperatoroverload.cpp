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
    friend car operator +( car ob1,car ob2);
    void print()
    {

        cout<<x<<endl<<y<<endl;
    }


};

car operator +( car ob1,car ob2)
{
    car res;
    res.x = ob1.x+ ob2.x;
    res.y= ob1.y+ob2.y;
    return res;

}


int main()
{
    car o(20,30),o1(50,60), o2;
    o2=o+o1;
    o2.print();

    return 0;

}
