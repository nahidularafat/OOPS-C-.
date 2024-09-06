// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class car{
  public : 
  string car;
  string model;
  
  void display()
  {
      cout<<"car :"<< car <<endl << "Model :"<< model<<endl;
  }
  
};
int main() {
    car ob;
    car ob1;
    ob.car = "toyta";
    ob.model= "corolla";
    ob.display();
    ob1.car = "tata";
    ob1.model= "neno";
    ob1.display();
    
    return 0;
}
