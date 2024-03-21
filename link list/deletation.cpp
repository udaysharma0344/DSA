#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next; 

    Node(int value){
        data = value; 
        next = NULL; 
    }
};

void delfront(Node* &head){
    Node*temp=head;
    head=head->next;
    delete(temp);
}

void delback(Node* & head){
    Node* temp=head; 
    while((temp->next->next)!=NULL){
        temp=temp->next;
    }

    delete(temp->next->next);
    temp->next=NULL;
}

void delmid(Node * head){
    cout<<"enter the possition which you want to delete: ";
    int p ; cin>>p; 
    Node* x = head; 
    p--;
    while(--p){
        x=x->next;
    }
    Node * del = x-> next;
    x->next= x->next->next;
    delete del;

}
int main(){
cout<<"enter the no of nodes: ";
int n; cin>>n; 
int x; cin>>x;
Node* head = new Node (x);
Node * tail = head; 
while(--n){
    int x; cin>>x; 
    Node*temp = new Node(x);
    tail->next=temp;
    tail=temp; 
}
Node* u =head; 
cout<<"Before Deletation:"<<endl;
while(u!=NULL){
    cout<<u->data<<" ";
    u=u->next;
}
cout<<endl;
delmid(head); 
delfront(head);
delback(head);

u=head; 
cout<<"After Deletation:"<<endl;
while(u!=NULL){
    cout<<u->data<<" ";
    u=u->next;
}

 


 return 0;
}