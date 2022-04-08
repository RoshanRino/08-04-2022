#include <iostream>
using namespace std;
class feat
{
    int foot;
    int inch;
    public:
    void operator++ (int )
    {
        inch++;
        if(inch==12)
        {
            inch=0;
            foot++;
        }
    }
    void operator-- (int )
    {
        inch--;
        if(inch<0)
        {
            inch=11;
            foot--;
        }
    }
    feat operator+ (feat d)
    {
        feat temp;
        temp.foot=d.foot+foot;
        temp.inch=d.inch+inch;
        if(temp.inch>11)
        {
            temp.foot++;
            temp.inch=temp.inch-12;
        }
        return temp;
    }
    feat operator- (feat d)
    {
        feat temp;
        if(d.foot>foot)
        {
            temp.foot=d.foot-foot;
            temp.inch=d.inch-inch;
            if(temp.inch<0)
            {
                temp.foot--;
                temp.inch+=12;
            }
        }
        else if(d.foot<foot)
        {
            temp.foot=foot-d.foot;
            temp.inch=inch-d.inch;
            if(temp.inch<0)
            {
                temp.foot--;
                temp.inch+=12;
            }
        }
        else if (temp.inch!=inch)
        {
            temp.foot=0;
            temp.inch= abs(d.inch-inch);
        }
        else
        {
            temp.foot=0;
            temp.inch=0;
        }
        return temp;
    }
    friend istream &operator>> (istream &input,feat &d)
    {
        input>>d.foot>>d.inch;
        return input;
    }
    friend ostream &operator<< (ostream &output,feat &d)
    {
        output<<d.foot<<" "<<d.inch<<"\"";
        return output;
    }
    void operator= (feat d)
    {
        foot=d.foot;
        inch=d.inch;
    }
};
int main()
{
    feat g,h,sum,diff1,diff2;
    cin>>g>>h;
    sum=g+h;
    diff1=g-h;
    diff2=h-g;
    cout<<"Sum of distance :"<<sum<<endl;
    cout<<"Difference in distance :"<<diff1<<" & "<<diff2<<endl;
    g++;
    h--;
    cout<<"Increment of first : "<<g<<endl;
    cout<<"Decrement of second : "<<h<<endl;
    g=h;
    cout<<g<<" Is Equal To "<<h<<endl;
    return 0;
}
