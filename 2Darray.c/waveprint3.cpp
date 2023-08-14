#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           if(j>i) swap(a[i][j],a[j][i]);
        }
    }
    int col=0;
   
    while(col<=2){
        int i=0;
        int j=2;
         swap(a[i][col],a[j][col]);
           
        
       col++;

    }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}