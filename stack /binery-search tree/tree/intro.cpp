#include<bits/stdc++.h>
using namespace std;
class Tree{
    public:
    int value; 
    Tree* left; 
    Tree* right; 

    Tree(int data){
        value=data;
        left=right=NULL;
    }
};

int main(){
    Tree* root = new Tree(6);
    Tree* r1 = new Tree(4);
    root->right = r1;

    root -> left = new Tree(5);

    
    
 return 0;
}