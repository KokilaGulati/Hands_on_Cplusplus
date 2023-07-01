//To move all zeros at the end 
#include<bits/stdc++.h>
using namespace std;
int moveZero(int arr[],int n){
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            int temp = arr[count];
            arr[count] = arr[i];
            arr[i] = temp;
            count++;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: ";
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    moveZero(arr,n);
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    return 0;  
}
