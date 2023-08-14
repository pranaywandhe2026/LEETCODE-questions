#include<bits/stdc++.h>
using namespace std;
void sum(int arr[3][3],int a,int b){
        int sum=0;
    for(int i=a;i<3;i++){
        for(int j=b;j<3;j++){
          sum+=arr[i][j];
        }
    }
    cout<<sum;
}
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cin>>arr[i][j];
        }
    }
    cout<<endl;
    sum(arr,0,1);
    // int sum=0;
    // for(int i=0;i<3;i++){
    //     for(int j=1;j<3;j++){
    //       sum+=arr[i][j];
    //     }
    // }
    // cout<<sum;
}