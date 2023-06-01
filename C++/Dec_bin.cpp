// Converting Decimal number to binary - this approuch involves the use of vectors
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    vector <int> ans;
    while(n>0)
    {
        int val = n%2;
        ans.push_back(val);
        n = n/2;
    }
    for(int i = ans.size()-1;i>=0;i--)
    {
        cout<< ans[i];
    }
    return 0;
}