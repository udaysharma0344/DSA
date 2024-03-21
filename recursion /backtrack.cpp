#include <bits/stdc++.h>
using namespace std;
void fun(string s,int n,int idx, vector<char> ans){
    if(idx==n) {
       
        for(auto it:ans)cout<<it;
        cout<<endl;
        return;
    }
    ans.push_back(s[idx]);
    fun(s, n, idx+1, ans);
    ans.pop_back();
    fun(s,n,idx+1,ans);
}

int main(){
    string s ="abc";
    vector<char>ans;
    fun( s, 3, 0, ans);
   
}