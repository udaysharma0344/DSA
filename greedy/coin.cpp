#include<bits/stdc++.h>
using namespace std;
int main(){
int i ; 
int n; cin>>n;
int a[n];
for(i = 0; i< n; i++){
    cin>>a[i];
}
cout<<"enter the value: ";
int x ; cin>>x; 
// sort(a ,a+n,greater<int>());
int t = n, temp = x, ans=0; 
i=0;
while(t--){
    ans+=(temp/a[i]);
    temp%=a[i];
    i++;
}

cout<<ans<<endl;
 return 0;
}