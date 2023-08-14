#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    for(int k=2;k>=0;k--){
        if(k%2!=0){
            int i=0;
            int j=2;
            while(i<=j){
                swap(a[k][i],a[k][j]);
                i++;
                j--;
            }
        }
    }
     for(int i=2;i>=0;i--){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
       
    }
} 