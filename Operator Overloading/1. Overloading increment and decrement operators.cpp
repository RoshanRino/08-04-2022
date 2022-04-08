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
    Person operator++ (int)
    {
        salary+=1000;
        return Person(id,name,salary); 
    }
    Person operator-- (int)
    {
        salary-=1000;
        return Person(id,name,salary); 
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
    p++;p2--;
    cout<<endl;
    p.print();
    p2.print();
}