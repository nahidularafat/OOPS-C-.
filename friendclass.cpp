#include<iostream>
using namespace std;
class A{
private : string name ="arafat";
public :
friend class B;
  
};
class B
{
    public:
    void display(A ob)
    {
        cout<<ob.name<<endl;
    }
};
int main()
{
    A ob;
    B ob2;
    ob2.display(ob);
}
