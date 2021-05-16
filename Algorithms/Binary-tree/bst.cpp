#include<bits/stdc++.h>
using namespace std;
struct node{
	int val;
	node* right;
	node* left;
	node():val(0),left(NULL),right(NULL){};
	node(int x):val(x),left(NULL),right(NULL){};	
};
node* root =new node();
// node ROOT =node();
node* insert(int val, node*root){
	
	if(!root){
		node* temp=new node(val);
		return temp;
	}else{
		if(val<root->val){
			root->right=insert(val,root->right);
		}else{
			root->left=insert(val,root->left);
		}
		
	}
	return root;
};

node* dlt(int val,node* root){
	node* temp= root;
	
	if(root==NULL){
		return root;
	}
	if(temp->val==val){
			//FOR LEAF NODES ;
			// one child or zero child
				if(temp->left==NULL){
					node* temp2=temp->right;
					return temp2;
				}else if(temp->right==NULL){
					node* temp2=temp->left;
					return temp2;
				}else{
					//both child 
					node* temp2=temp->right;
					while(temp2 && temp2->left != NULL){
						temp2=temp2->left;
					}
					temp->val=temp2->val;
					temp->right=dlt(temp->val,temp->right);
				}
		}else{
			
			if(temp->val<val){
				
				root->right= dlt(val,root->right);
			}else{
				root->left= dlt(val,root->left);
			}
		}
		return root;
}
// node Insert(int val, node root){};
void inorder(node* root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->val<<" ";
		inorder(root->right);
	}
}
int main(){
	int x,n;
	char c;
	cin>>x;

	while(--x){
		cin>>c>>n;
    if(c=='i')
      root = insert(n,root);
    else 
      root = dlt(n,root);
	  inorder(root);
  }
  return 0;
	}


