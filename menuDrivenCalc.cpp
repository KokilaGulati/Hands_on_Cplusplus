// writing  a menu driven program to perform basic calculations
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    char op;
    while(true){
        cout<<"\n\nMenu: \n 1.Addition: 'A'\n2.Subtraction: 'S'\n3.Multiplication: 'M'\n4. Division: 'D'\n5. Quit the program: 'Q'";
        cout<<"\nEnter your choice: ";
        cin>>op;
        if(op=='Q'){
            cout<<"\nQuitting the program";
            exit(0);
        }
        else{
            cout<<"\nEnter the two numbers: ";
            cin>>x>>y;
            switch(op){
                case 'A':cout<<"\nRequired Sum is: "<<x+y;
                        break;
                case 'S' :cout<<"\nRequired difference is: "<<x-y;
                        break;
                case 'M':cout<<"\nRequired Product is: "<<x*y;
                        break;
                case 'D':cout<<"\nRequired Division is: "<<x/y;
                        break;
                default: cout<<"\nEnter a valid choice\n";
                        break;
            }
        }
    }
    return 0;
}