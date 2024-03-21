#include<bits/stdc++.h>
using namespace std;
class Node{
    public: 
    int data; 
    Node*next; 

    Node(int value){
        data = value; 
        next = NULL;
    }
};

void addfront(Node* &head){
            int x; cout<<"enter the value to add in front: "; cin>>x;  
            Node*n= new Node(x);
            n->next=head; 
            head=n; 
    }

void addback(Node* &head){
    Node*temp = head; 
    while((temp->next)!=NULL){
        temp=temp->next; 
    }
    if((temp->next)==NULL){
            int x; cout<<"enter the value to add in back: "; cin>>x;  

            Node*last= new Node(x);
            temp->next=last;
        }
}

void addmid(Node* head){
    int n;
    cout<<"Enter the mid possition to add node: ";
    cin>>n;
    Node * temp = head ; 
    n=n-2; 
    while(n--){
        temp = temp->next; 
    }
    cout<<"enter the value of the node: ";
    int x; cin>>x;
    Node* a= new Node(x);
    a->next=temp->next;
    temp->next=a; 
    }


int main(){
    cout<<"Enter the no of Nodes: ";
    int n; cin>>n;
    int x; cin>>x; 
    Node *head = new Node(x);
    Node *tail = head;

    while(--n){
        int x; cin>>x; 
        Node* temp= new Node(x);
        tail->next= temp;
        tail=temp;
    }
    Node* u= head; 
    cout<<"Before insertion \n";
    while(u!=NULL){
        cout<<u->data<<" ";
        u=u->next; 
    }
    cout<<endl;

    addmid(head);
    addfront(head);
    addback(head);

    u= head; 
    cout<<"After insertion \n";
    while(u!=NULL){
        cout<<u->data<<" ";
        u=u->next; 
    }

return 0;
}