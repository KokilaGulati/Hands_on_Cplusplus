#include <bits/stdc++.h>
using namespace std;
int main(){
    int count = 0,flag = 10, n; 
    cout<<"Enter the no. of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: ";
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        flag=10;
        for(int j=i-1;j>=0;j--)
        {
            if(arr[i]==arr[j])
            {
                flag=20;
            }
        }
        if(flag==10){
            count++;
        }
    }
    cout<<"The number of distinct elements: "<<count;
    return 0;
}