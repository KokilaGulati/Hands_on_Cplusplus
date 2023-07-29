//2,3,1,1,4
#include<bits/stdc++.h>
using namespace std;
bool jump(int arr[], int n){
    int i=0;
    while(i<n){
        i = i+arr[i];
        if(i>n-1)
            return false;
        else if(i==n-1)
            return true;
        else
            continue;
    }    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool ans = jump(arr,n);
    cout<<"Answer: "<<(ans? "True": "False");
    return 0;
}