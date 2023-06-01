//eg: 153 is an armstrong number
//1^3+5^3+3^3 = 1+125+27=153
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, flag=0;
    cout<<"Enter a number: ";
    cin>>n;
    int ini_num = n;
    while(n>0)
    {
        int k = n%10;
        n = n/10;
        int val = pow(k,3);
        flag = flag+val;
    }
    if(flag==ini_num)
        cout<<"It is an armstrong number";
    else
        cout<<"Not an armstrong number";
    return 0 ;
}