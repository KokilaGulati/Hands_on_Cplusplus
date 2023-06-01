// sum of n natural numners using the formula : n(n+1)/2
#include <iostream>
using namespace std;
int main()
{
    int n, Sn = 0;
    cout<<"Enter the natural number: ";
    cin>>n;
    Sn +=((n)*(n+1))/2;
    cout<<"\nThe required Sum is: "<<Sn<<endl;
    return 0;
}
