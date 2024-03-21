#include<bits/stdc++.h>
using namespace std;
int conv(int n ){
    if(n==1) return 1;

    return (n%2)+ 10*conv(n/2);
}
int main(){
    int n ;
    cin>>n ; 
    cout<<conv(n)<<endl ;
 return 0;
}