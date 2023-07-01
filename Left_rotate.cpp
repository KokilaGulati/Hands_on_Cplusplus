// Left rotating an array by d times
#include<bits/stdc++.h>
using namespace std;
void Reverse(int arr[], int low,int high){
    while(low<high){
        int temp = arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        high--;
        low++;
    }
    return;
}
void left_rotate(int arr[],int n,int x){
    Reverse(arr,0,x-1);
    Reverse(arr,x,n-1);
    Reverse(arr,0,n-1);
    return;
}
int main()
{
    int n,d;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: ";
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    cout<<"Enter the number of times you want to left rotate: ";
    cin>>d;;
    left_rotate(arr,n,d);
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    return 0;  
}