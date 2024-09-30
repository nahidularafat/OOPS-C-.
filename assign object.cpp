#include<iostream>
using namespace std;
class myclass{
  private :
  int n;
  public:
  void get(int a)
  {
      n=a;
  }
  void display()
  {
      cout<<n<<endl;
  }
  
};
int main()
{
    myclass ob;
    ob.get(4);
    ob.display();
    myclass ob2;
    ob2=ob;
    ob2.display();
    
}
