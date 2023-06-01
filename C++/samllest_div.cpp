// Write a program that takes a number as input from the user and prints the smallest divisor of that number
#include<iostream>
using namespace std;
int main()
{
    int n,div=1;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=2;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            div=i;
            //cout<<"\nThe smallest divisor is: "<<div;
            break;
        }
        else
            continue;
    }
    cout<<"\nThe smallest divisor is: "<<div;
    return 0;
}