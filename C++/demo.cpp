#include<iostream>
using namespace std;
int main()
{
 extern int i;
 cout<<i<<" ";
 {
    int i =10;
    cout<<i<<" ";
 }
}