#include<bits/stdc++.h>
using namespace std;
int SumArr(int a[],int n ){
    if(n<0) return 0;
    
    return a[n] + SumArr(a,n-1);
}
int main(){
    int n ; cin>>n ;
    int arr[n];
    for(int i=0 ; i< n; i++ ){
        cin>>arr[i]; 
    }

    cout<<endl<<SumArr(arr,n-1)<<endl ;
 return 0;
}