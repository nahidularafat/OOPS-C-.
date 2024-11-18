#include<bits/stdc++.h>
using namespace std;

 class omplex{

 private :
     int real;
     int img;
 public:
    omplex(int r=0,int i=0)
    {

        real=r;
        img =i;
    }

    omplex operator +(omplex const& obj)
    {

        omplex res;
        res.real= real+obj.real;
        res.img=img+obj.img;
        return res;
    }

    void print()
    {
        cout<<real<< "+i "<<img<<endl;

    }
 };
int main()
 {
     omplex c1(10,5),c2(2,4);
     omplex c3= c1+c2;
     c3.print();

 }
