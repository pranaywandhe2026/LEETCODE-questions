#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int t[3][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            if(i!=j){
               t[i][j]=arr[j][i]; 
            }
            
        }
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
           cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}
