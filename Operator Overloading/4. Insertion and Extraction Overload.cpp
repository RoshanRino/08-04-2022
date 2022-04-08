#include<iostream>
using namespace std;
class timed
{
    int hour;
    int min;
    int sec;
    public:
    friend istream &operator>> (istream &i,timed &t)
    {
        cout<<"Enter Hours: ";
        i>>t.hour;
        cout<<"Enter Minutes: ";
        i>>t.min;
        cout<<"Enter Seconds: ";
        i>>t.sec;
        return i;
    }
    friend ostream &operator<< (ostream &o,timed &t)
    {
        o.width(2);
        o.fill('0');
        o<<t.hour<<" : ";
        o.width(2);
        o.fill('0');
        o<<t.min<<" : ";
        o.width(2);
        o.fill('0');
        o<<t.sec;        
        
        return o;
    }    
};
int main()
{
    timed t;
    cin>>t;
    cout<<t;
}