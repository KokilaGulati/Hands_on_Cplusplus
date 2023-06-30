//Linear Search 
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
    for(auto y =0;y<n;y++){
        flag =10;
        if(arr[y]==x){
            cout<<"Value found at "<<y+1<<"\n";
            flag =20;
            break;
        }
    }
    if(flag==10)
        cout<<"\nValue Not found!";
    return 0;
}