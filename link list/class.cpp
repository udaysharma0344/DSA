#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    
    Node(int x){
        val = x;
        next=NULL;
    }
};

void addinstart(Node* &head){
    int x;cin>>x;
    Node* temp=new Node(x);
    
    if(head!=NULL){
        temp -> next = head;
        head=temp;
    }else 
        head = temp;
}


int main()
{
    
    // Node* n1= new Node();
    // Node* n2= new Node(15);
    // n1->next= n2;
    // cout<< n1->val<<" ";
    // cout<< (*n1).next<<" ";
    // Node * n3 = new Node(34);
    // n2->next= n3;
    // cout<<n2->next->val;

    Node* head= new Node(5);
    Node* temp=head;
    int n;
    // Node* n2= new Node(4);
    // n2=n1->next;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        Node* t = new Node(x);
        temp->next = t;
        temp=temp->next;
    }
    // cout<<temp->val;
    Node* last = new Node(6);
    temp->next=last;
    
    addinstart(head);
    
    
    Node* n2= head;
    while(head!= NULL){
        cout<<head->val;
        head=head->next;
    }
    
}