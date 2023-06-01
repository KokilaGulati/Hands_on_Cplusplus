// Converting decimal to binary using the STRING approuch
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s = " ";
    cout<<"Enter the Number: ";
    cin>>n;
    while(n>0)
    {
        int val = n%2;
        s = s+(to_string(val));
        n/=2;
    }
    reverse(s.begin(),s.end());
    cout<<"\nThe decimel equivalent is: "<<s;
    return 0;
}