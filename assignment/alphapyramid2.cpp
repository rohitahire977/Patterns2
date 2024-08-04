#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }

        /*
          A
          BA
          CBA
          DBCA 
                 */
        for(int k=i;k>=1;k--){
            cout<<char(k+64);
        }

        /*
          
          B
          BC
          BCD
               */
        for(int z=1;z<i;z++){
            cout<<char(z+65);
        }
        cout<<endl;
    }
}