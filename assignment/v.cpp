#include<iostream>
using namespace std;
/*
 *       *
  *     *    N======5
   *   *
    * *
     *            */
int main(){
    int n;
    cout<<"enter no. of rows:";
    cin>>n;
    int x=n+1 ;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j){
                cout<<"*";
                  }
            else{
                cout<<" ";
            }
            for(int z=1;z<=n-i-1;z++){
                cout<<" ";
            }
            for(int k=1;k<=1;k++){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}    