#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i%2==0)
            arr[i][j]=10;
            else
            arr[i][j]=20;
        }
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}