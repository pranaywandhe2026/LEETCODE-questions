#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(j>i) swap(arr[i][j],arr[j][i]);
        }
    }
    int i=0;
    int j=2;
    while(i<j && i<3){
        swap(arr[i],arr[j]);
        i++;
        
    }
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         if(j==2) swap(arr[i][j],arr[i][0]);
    //     }
    // }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}