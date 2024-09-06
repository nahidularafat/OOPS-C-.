#include <bits/stdc++.h>
using namespace std;

class parent
{
  protected:
    string name;

};
    
    
    class child : public parent
    {
        public : void setname(string n)
        {
            name = n;
        }
        void display()
        {
            cout<<name<<endl;
        }
    };


int main() {
    child ob;
    ob.setname("arafat");
    ob.display();
     
    return 0;
}
