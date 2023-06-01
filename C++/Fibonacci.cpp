//Fibonaaci - the number of ways to reach the top using stairs if you can skip only 1 step max.
// series: 1,1,2,3,5,8...
// for n=0 -----1
// for n=1 -----1
// for n=2 -----2 and so on.
#include<iostream>
using namespace std;
int main()
{
    int n, x=1,y=1;
    cout<<"Enter the number of steps: ";
    cin>>n;
    if (n>=0)
        cout<<x<<" ";
    if(n>=1)
        cout<<y<<" ";
    if(n>=2)
    for (int i = 2;i<=n;i++)
    {
        int c = x+y;
        cout<<c<<" ";
        x = y;
        y = c;
    }
    return 0;
}


