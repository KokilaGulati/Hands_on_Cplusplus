// printing whether entered year is a leap year or not 
//Concept:
//        year should e divisile by 4 and not by 100 (eg:1952,1956,1960)
//        year should be divible by 400 (eg: 2000,2400,2800)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cout<<"\nEnter a year: ";
    cin>>y;
    if(y%4==0){
        if(y%100!=0)
        {
            cout<<y<<" is a leap year";
        }
    }
    else if(y%400==0)
        cout<<y<<" is a leap year";
    else
        cout<<y<<" is not a leap year";
    return 0;
}