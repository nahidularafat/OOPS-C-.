// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class circle{
  public : 

  double radious;
  
  double calculate()
  {
      return radious*radious*3.14;
  }
  

};
int main() {
   circle ob;
   ob.radious =10.8;
   cout << ob.radious<< endl;
   cout<< ob.calculate()<<endl;
   
    
    return 0;
}
