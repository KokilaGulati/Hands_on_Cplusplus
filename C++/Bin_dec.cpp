//Convering a decimal number to binary
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int s,ans=0;
    cout<<"Enter the number: ";
    cin>>s;
    int i = 0;
    while(s>0)
    {
        int last  = s%10;
        s = s/10;
        int val = (last*(pow(2,i)));
        ans = ans + val;
        i++;
    }
    cout<<"The binary equivalent is: "<<ans;
    return 0;
}