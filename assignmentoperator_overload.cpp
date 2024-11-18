#include<bits/stdc++.h>
using namespace std;


class car{

private :
    int x,y;
public:
    void datauser()
    {
        cin>>x>>y;

    }
    car operator +( car ob)
    {
        x = ob.x;
        y = ob.y;

    }
    void print()
    {

        cout<<x<<endl<<y<<endl;
    }


};




int main()
{
   car o1,o2;
   o1.datauser();
   o2=o1;
   o2.print();

    return 0;

}
