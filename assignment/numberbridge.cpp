#include<iostream>
using namespace std;
/*
1234321
123 321    N======4
12   21
1     1  */
int main(){
    int n;
    cout<<"enter no. of rows:";
    cin>>n;
    cout<<"1234321"<<endl;
    int a=69; 
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-i;j++){
            cout<<j;
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<" ";
        }
        //321
        //21
        //1
        for(int z=n-i;z>=1;z--){
            cout<<z;
        }
        cout<<endl;
    }
}    
