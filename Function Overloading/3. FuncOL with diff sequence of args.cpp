#include<iostream>
using namespace std;
void print(int a,float b)
{
    cout<<"Integer first and Float second"<<endl;
}
void print(float a , int b)
{
    cout<<"Float first and Integer second";
}

int main()
{
    int a=89;
    float c=10.53;
    print(a,c);
    print(c,a);
}