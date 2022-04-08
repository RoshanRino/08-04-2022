#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int add(int a , int b,int c)
{
    return a+b+c;
}
int add(int a, int b, int c,int d)
{
    return a+b+c+d;
}
int main()
{
    int a=5,b=10,c=15,d=20;
    int two,three,four;
    two=add(a,b);
    three=add(a,b,c);
    four=add(a,b,c,d);
    cout<<two<<endl<<three<<endl<<four;
    return 0;
}