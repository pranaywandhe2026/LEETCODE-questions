#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
   
    for(int k=0;k<4;k++){
        if(k%2!=0){
         int i=0; 
        int j=3;
        while(i<=j){
            swap(a[k][i],a[k][j]);
            i++;
            j--;
        }
        }
       
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}