//Binary search
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,flag;
    cout<<"Enter the number of array elements: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements: ";
    for(auto& x: arr)
        cin>>x;
    cout<<"\nEnter the value to be searched: ";
    cin>>x;
    int s = 0; int e = n-1;
    while(s<=e){
        flag = (s+e)/2;
        if(arr[flag]==x){
            cout<<"Value found at: "<<flag+1<<" ";
            break;
        }
        else if(arr[flag]>x)
                e =flag;
        else
                s=flag;
    }  
    if(flag==-1)
        cout<<"Value not found!";  
    return 0;
}