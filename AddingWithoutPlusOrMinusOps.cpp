// adding two numbers without using + or -
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(b>=0){
        while(b>0){
            a++;
            b--;
        }
        cout<<"Sum: "<<a;
    }
    else{
        while(b==0){
            a--;
            b++;
        }
        cout<<"Sum: "<<a;
    }
    return 0;
}