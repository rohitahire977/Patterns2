#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of rows:";
    cin>>n;
    int a=1; 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //A
        //ABC
        //ABCDE
        //ABCDEFG
        for(int k=1;k<=2*i-1;k++){
            cout<<char(k+64);
        }
        cout<<endl;
    }
}