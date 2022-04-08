#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
float add(float a , float b)
{
    return a+b;
}
string add(string a, string b)
{
    return a+b;
}
int main()
{
    int a=89,b=63;
    float c=10.53,d=4.73;
    string e="Zo",f="Ho";
    cout<<add(a,b)<<endl<<add(c,d)<<endl<<add(e,f);
    return 0;
}