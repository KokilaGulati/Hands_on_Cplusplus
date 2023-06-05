// calculating HCF of two numbers
#include<bits/stdc++.h>
using namespace std;
int hcf(int a, int b)
{
    int mid;
    while(true){
        mid = a%b;
        if(mid==0)
            return b;
        else{
            a= b;
            b = mid;
            }
        }
}
int main()
{
    int x,y;
    cout<<"Enter the numbers: ";
    cin>>x>>y;
    int a = max(x,y);
    int b = min(x,y);
    int ans  = hcf(a,b);
    cout<<"\nHCF of the given numbers is: "<<ans;
    return 0;
}
