#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of rows:";
    cin>>n;
    int a=1; 
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        //1
        //123
        //12345
        //1234567
        for(int k=1;k<=2*i-1;k++){
            cout<<k;
        }
        cout<<endl;
    }
}