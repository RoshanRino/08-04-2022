#include<iostream>
using namespace std;
class Person
{
    int id;
    string name;
    int salary;
    public:
    Person(int a,string b,int c)
    {
        name=b;
        id=a;
        salary =c;
    }
    Person()
    {
    }
    Person operator- ()
    {
        salary=(-salary);
        return Person(id,name,salary); 
    }
    void print()
    {
        cout<<"ID :"<<id<<endl<<"Name : "<<name<<endl<<"Salary :"<<salary<<endl;
    } 
    
};
int main()
{
    Person p(3,"BOB",5000);
    p.print();
    cout<<endl;
    -p;
    p.print();
  
}