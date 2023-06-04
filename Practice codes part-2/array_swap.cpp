//Swapping two consecutive numbers in an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i =0;i<n;i++)
        cin>>arr[i];
    if(n%2==0)
    {
        for(int i=0;i<n;i+=2)
        {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    else
    {
        for(int i =0;i<n-1;i+=2)
        {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    cout<<"The Swapped array is: ";
    for(int i =0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}