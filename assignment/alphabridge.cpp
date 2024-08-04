#include<iostream>
using namespace std;
/*
ABCDEFG
ABC EFG    N======4
AB   FG
A     G  */
int main(){
    int n;
    cout<<"enter no. of rows:";
    cin>>n;
    cout<<"ABCDEFG"<<endl;
    int a=69; 
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-i;j++){
            cout<<char(64+j);
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<" ";
        }
        //EFG
        //FG
        //G
        for(int z=1;z<=n-i;z++){
            cout<<char(n+z+i+63);
        }
        cout<<endl;
    }
}    