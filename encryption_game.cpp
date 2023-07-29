//encyption game
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,mid;
    string w;
    cout<<"\nEnter the number of testcases: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"\nEnter the length of word";
        cin>>l;
        cout<<"\nEnter the word: ";
        cin>>w;
        if(w.length()!=l && w.length()<2){
            cout<<"Invalid Input";
            break;
        }
        if(w.length()%2==0){
             mid = (w.length()/2)-1;
        }
        else
             mid = w.length()/2;
        char temp = w[mid];
        w[mid] = w[0];
        w[0]= temp;
        cout<<"\nEncypted Text: "<<w;
    }
    return 0;

}