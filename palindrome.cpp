// palindrome number;
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,flag=10;
    cout<<"Enter the number: ";
    cin>>n;
    string str = to_string(n);
    int l = str.length();
    for(int i=0,j=l-1;i<l,j>=0;i++,j--)
    {
        if(str[i]!=str[j])
        {
            flag = 20;
            break;
        }
    }
    if(flag==10)
        cout<<"Number is palindrome";
    else
        cout<<"Number is not palindrome";
}