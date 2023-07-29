//integer to roman conversions
#include<bits/stdc++.h>
using namespace std;
void Roman(int n){
    vector <int> num = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    vector <string> roman = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    while(n>0){
        for(int i=0;i<13;i++)
        {
            if(n>=num[i]){
                cout<<roman[i];
                n = n-num[i];
            }
        }
           
    } 
}
int main()
{
    int num;
    cout<<"enter the integer number: ";
    cin>>num;
    Roman(num);
    return 0;
}