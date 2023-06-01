//Calculating the LCM of two entered numbers
// LCM of two numbers a and b will always be in the range (a-(a*b)) if (a>b) or it will be in the range (b-(a*b))
//if b>a. 
//also the smallest number divisible by both a and b in that range will be the required LCM

#include<iostream>
using namespace std;
int main()
{
    int x,y,big,sm;
    cout<<"Enter the two numbers: ";
    cin>>x>>y;
    int z = x*y;
    if(x>y)
    {
         big = x;
         sm = y;
    }
    else
    {
         big = y;
         sm = x;
    }
    for( int i = big;i<=z;i++)
    {
        if(i%big==0&& i%sm==0)
        {
            cout<<"The LCM of the numbers is: "<<i;
            break;
        }
        else
            continue;
    }
    return 0;
}