#include<iostream>
using namespace std;
struct node
{
	int data;
	node *left;
 node *right;
}*root=NULL;


void insert(node *root,node *temp)
{
	if(root==NULL)
	{
	root=temp;
	root->left=NULL;
	root->right=NULL;
	}
	else
	{
		if(temp->data < root->data)
		{
			if(root->left==NULL)
			{
			root->left=temp;
			temp->left=NULL;
			temp->right=NULL;
			}
			else
			{
			insert(root->left,temp);
			}
		}
		else
		{
			if(root->right==NULL)
			{
			root->right=temp;
			temp->left=NULL;
			temp->right=NULL;
			}
			else
			{
				insert(root->right,temp);
			}
		}
	}
}




/* Inorder traversal of a binary tree*/
void inorder(struct node* temp) 
{ 
    if (!temp) 
        return; 
  
    inorder(temp->left); 
    cout << temp->data << " "; 
    inorder(temp->right); 
} 


int main()
{
	node *temp=new node;//=new node();
	int data;
		for(int i=0;i<6;i++)
		{
		cin>>data;
	temp->data=data;
	
	temp->left=NULL;
	temp->right=NULL;
	//for(int i=0;i<7;i++)
	//{
	insert(root,temp);
	inorder(temp);}

	


	
	return 0;
}
