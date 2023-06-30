//Remove all duplicates from a sorted array 
#include<bits/stdc++.h>
using namespace std;
int remDup(int arr[],int n){
    int index=1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[index-1]){
            arr[index]=arr[i];
            index++;
        }
    }
    return index;
}
int main(){
    int n; 
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index = remDup(arr,n);
    cout<<"\nAfter removing Duplicates:  ";
    for(int j=0;j<index;j++)
        cout<<arr[j]<<" ";
    return 0;
}