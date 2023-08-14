#include<bits/stdc++.h>
using namespace std;
int main(){
        string s="aa";
          int n=s.size();
        int index=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                 index=i;
                 break;
            }
        }
        if(index==0) index=n;

        for(int i=0;i<index;i++){
            
            char ch=s[i];
            if(s[i]=='a' && n!=1) continue;
            else {
                if(s[i]=='a') {
                    s[i]='z';
                    break;
                }
                int ascii=(int)ch;
                s[i]=(char)(ascii-1);
            }
        }

        cout<<s;
    // int x=62415;
    // string n=to_string(x);
    // int max=0;
    // for(int i=0;i<n.size();i++){
    //     if(max<n[i]) max=n[i];
    // }

    // cout<<max;
    // int arr[6]={10,500,1,20,3,10};
    // int max=INT_MIN;
    // int smax=INT_MIN;
    // int tmax=INT_MIN;
    // for(int i=0;i<6;i++){
    //     if(max<arr[i]){
    //         tmax=smax;
    //         smax=max;
    //         max=arr[i];
    //     }
    //     else if(smax<arr[i]) {
    //         tmax=smax;
    //         smax=arr[i];
    //     }
    //     else if(tmax<arr[i]) tmax=arr[i];
    // }
    //     cout<<max<<" ";
    //     cout<<smax<<" ";
    //     cout<<tmax;
    // //  for(int i=0;i<5;i++){
    // //     if(smax<arr[i] && arr[i]!=max){
    // //         smax=arr[i];
    // //     }
    // // }

    
    // // int min=0;
    // // for(int i=0;i<5;i++){
    // //     for(int j=i+1;j<5;j++){
    // //         if(arr[j]<arr[i]){
    // //             swap(arr[i],arr[j]);
    //         }
    //     }
    // }
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }
}