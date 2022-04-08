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
    Person operator+ (Person p)
    {
        salary=salary+p.salary;
        id=id+p.id;
        name=name+" "+p.name;
        return Person(id,name,salary); 
    }
    void print()
    {
        cout<<"ID :"<<id<<endl<<"Name : "<<name<<endl<<"Salary :"<<salary<<endl;
    } 
    
};
int main()
{
    Person p(3,"BOB",5000),p2(4,"BOG",10000),p3;
    p.print();
    p2.print();
    cout<<endl;
    p3=p+p2;
    p.print();
  
}