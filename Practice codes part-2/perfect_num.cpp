// Checking for a perfect number
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum=1;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n)
        cout<<"Perfect nummber!";
    else
        cout<<"Not a perfect number";
}