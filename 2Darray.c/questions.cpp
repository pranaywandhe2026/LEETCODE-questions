#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int max=0;
    int index=-1;
    for(int i=0;i<n;i++){
        int x=stoi(v[i]);
        if(max<x){
            max=x;
            index=i;
        }
    }
    cout<<index<<" "<<max;
}