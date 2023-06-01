//next nearest prime number after the entered number
#include<bits/stdc++.h>
using namespace std;
int check_prime(int n,int flag)
{
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag = 20;
            return flag;
        }
        else
            continue;
    }
    return flag;
}
int main()
{
    int n,flag = 10;
    cout<<"Enter a number: ";
    cin>>n;
    while(true){
        n +=1;
        int ans = check_prime(n,flag);
        if(ans==10)
        {
            cout<<"Next prime numnner is: "<<n;
            break;
        }       
    }
    return 0;
}