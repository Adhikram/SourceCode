#include<iostream>
#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    int pos;
    node *left,*right;
};

node *insert_node(node *root,int x,int pos){
    if(root==NULL){
        cout<<pos<<"\n";
        node *temp=new node();
        temp->data=x;
        temp->pos=pos;
        temp->left=NULL;
        temp->right=NULL;
        return temp;
    }
    else{
        if(root->data<x)
            root->right=insert_node(root->right,x,2*pos+1);
        else
            root->left=insert_node(root->left,x,2*pos);
    }
return root;
}
node* delete_node(node *root,int x){
    if(root==NULL)
        return root;

    if(x<root->data)
        root->left=delete_node(root->left,x);

    else if(x>root->data)
        root->right=delete_node(root->right,x);

    else{
        cout<<root->pos<<"\n";
        if(root->left==NULL){
             node *temp=root->right;
             delete root;
             return temp;
        }
        else if(root->right==NULL){
            node *temp=root->left;
             delete root;
             return temp;
        }
        else{
            node *succ = root->right;
            while (succ->left != NULL) 
                succ = succ->left;
            root->data = succ->data;
            root->right=delete_node(root->right,root->data);
        }
    }
return root;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    int queries;
    char c;
    int x;
    node *root=NULL;
    cin>>queries;
    while(queries--){
        cin>>c>>x;
        if(c=='i')
            root=insert_node(root,x,1);
        else
            root=delete_node(root,x);
    }
return 0;
}
