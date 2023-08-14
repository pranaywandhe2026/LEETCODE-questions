#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={19,12,23,8,16};
    int n=5;
    vector<int> v;
    for(int i=0;i<n;i++){
        int count=0;
       int j=0;
       while(j<n && i!=j){
            if(arr[i]>arr[j]) count++;
       }
       v.push_back(n-count-1);
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
}