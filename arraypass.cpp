#include<iostream>
using namespace std;
class student
{
    private:
    string name ;
    int id;
    char grade;
    public :
    student (string n, int i, char c)
    {
        name =n;
        id =i;
        grade = c;
    }
    void display()
    {
        cout<<name<<endl<<id<<endl<<grade<<endl;
    }
    
};


int main()
{
    student s[3]={
         student("Araf", 1, 'A'),
        student("Bikas", 2, 'A'),
        student("Toma", 4, 'A')
        
    };
    
    for(int i=0;i<3;i++)
    {
        cout<<"student"<<i+1<<endl;
         s[i].display();  
         cout<<endl;
    }
    
}
