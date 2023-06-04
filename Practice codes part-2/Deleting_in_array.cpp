// deleting elements in array
#include<bits/stdc++.h>
using namespace std;
int Delete(int arr[], int n, int x =-1,int y=-1)
{
    int i;
    for (i=0; i<n; i++){
        if (arr[i] == x)
        break;
    }
    if (i < n)
    {
        n = n - 1;
        for (int j=i; j<n; j++)
        arr[j] = arr[j+1];
    }
    if(y!=-1){
        for (i=0; i<n; i++){
            if (arr[i] == x)
            break;
        }
        if (i < n)
        {
            n = n - 1;
            for (int j=i; j<n; j++)
            arr[j] = arr[j+1];
        }
    }
    return n;
}
int main()
{
    int n,x,y;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter values to be deleted";
    cin>>x>>y;
    n = Delete(arr,n,x,y);
    cout<<"\nNew array is: ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}