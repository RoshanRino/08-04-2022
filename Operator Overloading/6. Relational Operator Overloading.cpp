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
    bool operator> (Person p)
    {
        if(salary>p.salary)
            return true;
        return false;    
    }
    void print()
    {
        cout<<"ID :"<<id<<endl<<"Name : "<<name<<endl<<"Salary :"<<salary<<endl;
    } 
    
};
int main()
{
    Person p(3,"BOB",5000),p2(4,"BOG",10000);
    p.print();
    p2.print();
    cout<<endl;
    if(p>p2)
        cout<<"BOB has higher Salary";
    else
        cout<<"BOG has higher Salary";
  
}