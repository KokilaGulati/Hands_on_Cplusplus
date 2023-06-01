#include <iostream>
using namspace std;
int main()
{
    int n, Sn = 0;
    cout<<"Enter the natural number: ";
    cin>>n;
    Sn +=((n)*(n+1))/2;
    cout<<"\nThe required Sum is: "<<Sn<<endl;
    return 0;
}
