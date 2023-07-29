// Lockdown game
#include<iostream>
#include<vector>
using namespace std;
void game(string str, int n){
    vector<int> num;
    for(int i=0;i<n;i++)
        num.push_back(i);
    int k=0,j=0;
    while(num.size()>1){
        if(str[j]=='x'){
            k = (k+1)%(num.size());
            j = (j+1)%(str.length());
        }
        else{
            int size = num.size();
            int temp = num[k];
            cout<<"\nremoved element: "<<num[k]+1;
            num.clear();
            for(int i=0;i<size;i++){
                if(i==temp)
                    continue;
                else
                    num.push_back(i);
            }
            cout<<"\nInteration ended";
            j = (j+1)%(str.length());
        }
    } 
    cout<<"\nwinner: "<<num[0]+1;
}
int main(){
    int n;
    string str;
    cout<<"Enter the number of family members: ";
    cin>>n;
    cout<<"\nEnter the lyrics: ";
    cin>>str;
    game(str,n);
    return 0;
}