// calculating HCF of two numbers
#include<bits/stdc++.h>
using namespace std;
int hcf(int a, int b)
{
    int mid;
    if(a>b)
    {
        while(true){
            mid = a%b;
            if(mid==0)
            {
                return b;
            }
            else{
                a= b;
                b = mid;
                continue;
            }
        }
    }
    else{
        while(true)
        {
            mid = b%a;
            if(mid==0)
            {
                return a;
            }
            else{
                b = a;
                a = mid;
                continue;
            }
        }
    }
}
int main()
{
    int x,y;
    cout<<"Enter the numbers: ";
    cin>>x>>y;
    int ans  = hcf(x,y);
    cout<<"\nHCF of the given numbers is: "<<ans;
    return 0;
}