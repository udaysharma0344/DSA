#include<bits/stdc++.h>
using namespace std;

void all_swap(int a[] , int n){
    for(int i = 0; i< n; i+=2){
        if((i+1)<n){
            swap(a[i],a[i+1]);
        }
    }
}

void print_array(int a[] , int n){
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl; 
}
int main(){
    int even[8]={1, 2 , 3 , 4 , 5 , 6 , 7 , 8 };
    int odd[5]={1 , 2 , 3 , 4 , 5 };
    
    all_swap(even,8);
    print_array(even,8);

    all_swap(odd,5);
    print_array(odd, 5);
        
    return 0;
}