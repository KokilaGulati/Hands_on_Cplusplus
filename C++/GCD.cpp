//GCD: Greatest Common Divisor
// Max number that divides the given two numbers (eg: GCD(10,15)=5)
//GCD will always be smaller than the smaller number
#include<iostream>
using namespace std;
int main()
{
    int x,y,ans=0;
    cout<<" Enter the two numbers: ";
    cin>>x>>y;
    if(x<y)
    {
        for( int i =2;i<=x;i++)
        {
            if(x%i==0)
            {
                if(y%i==0)
                    ans  = i;
                else
                    continue;
            }
            else
                continue;
        }
        cout<<"The GCD number is: "<<ans;
    }
    else
    {
        for( int i =2;i<=y;i++)
        {
            if(y%i==0)
            {
                if(x%i==0)
                    ans  = i;
                else
                    continue;
            }
            else
                continue;
        }
        cout<<"The GCD number is: "<<ans;
    }
    return 0;
}