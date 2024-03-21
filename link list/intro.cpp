#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data; 
    Node*next;

    Node(int value){
        data= value; 
        next= NULL; 
        }
};

int main(){
    int n; cin>>n; 
    int x; cin>>x;
    Node*head= new Node (x);
    Node*tail= head;  
    n--; 
    while(n--){
        int x ; cin>>x;
        Node* t= new Node(x);
        tail-> next = t; 
        tail = t; 
    }

    Node* u= head; 
    while(u!=NULL){
        cout<<u->data<<" ";
        u=u->next; 
    }
    // delete(u);
    // cout<<endl<<u->next; 

 return 0;
}