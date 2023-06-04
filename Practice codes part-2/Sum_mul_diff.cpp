//substract the sum of digits from the product of digits
#include<bits/stdc++.h>
using namespace std;
int Sum(int n){
    int sum = 0;
    while(n>0){
        int k = n%10;
        n = n/10;
        sum+=k;
    }
    return sum;
}
int product(int n){
    int pro =1;
    while(n>0){
        int k = n%10;
        n = n/10;
        pro = pro*k;
    }
    return pro;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum = Sum(n);
    int mul = product(n);\
    int ans = mul-sum;
    cout<<"The required answer is: "<<abs(ans);
    return 0;
}