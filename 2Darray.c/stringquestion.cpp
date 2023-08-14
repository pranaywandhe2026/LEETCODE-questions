#include<bits/stdc++.h>
using namespace std;
int main(){
   string name="salman is a nice nice actor";
   string temp;
   stringstream ss(name);
   vector<string> v;
   while(ss>>temp){
    v.push_back(temp);
   }
   sort(v.begin(),v.end());
   int maxi=1;
   int count=1;
   for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        maxi=max(maxi,count);
   }
   for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(maxi==count){
            cout<<v[i]<<" "<<maxi;
        }
   }
}