#include<iostream>
using namespace std;
#include<queue>
struct Node{
	int val;
	Node*left;
	Node*right;
	Node(int v):val(v),left(NULL),right(NULL){}
};
Node*BinaryTree(){
	int rootval;
	cout<<"Enter root value:";
	cin>>rootval;
	if(rootval==-1){
		return NULL;
	}
	Node*root=new Node(rootval);
	queue<Node*> q;
	q.push(root);
	while(!q.empty()){
		Node*curr=q.front();
		q.pop();
		int leftval,rightval;
		cout<<"Enter left child of:"<<curr->val<<" ";
		cin>>leftval;
		if(leftval!=-1){
			curr->left=new Node(leftval);
			q.push(curr->left);
		}
		cout<<"Enter right child of"<<curr->val<< " ";
		cin>>rightval;
		if(rightval!=-1){
			curr->right=new Node(rightval);
			q.push(curr->right);
		}
		
	}
	return root;
}
void preorder(Node*r){
	if(!r) return;
	cout<<r->val<<" ";
	preorder(r->left);
	preorder(r->right);	
}
void postorder(Node*r){
	if(!r) return;
	postorder(r->left);
	postorder(r->right);
	cout<<r->val;
}
void inorder(Node*r){
	if(!r) return;
	inorder(r->left);
	cout<<r->val;
	inorder(r->right);
}
void levelorder(Node*root){
	if(!root) return;
	queue<Node*> q;
	q.push(root);
	while(!q.empty()){
		int levelsize=q.size();
		for(int i=0;i<levelsize;i++){
			Node*curr=q.front();q.pop();
			cout<<curr->val<<" ";
			if(curr->left){
				q.push(curr->left);
			}
			if(curr->right){
				q.push(curr->right);
			}
		}
		cout<<"|";
		}
}
int main(){
	Node*root=BinaryTree();
	cout<<"Inorder:";
	inorder(root);
	cout<<"Preorder";
	preorder(root);
	cout<<"Postorder:";
	postorder(root);
	cout<<"Levelorder:";
	levelorder(root);
	return 0;
}

