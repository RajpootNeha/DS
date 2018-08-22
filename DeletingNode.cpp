#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
void push(Node** head,int number)
{
	Node* temp=new Node();
	temp->data=number;
	temp->next=*head;
	*head=temp;
}
void printList(Node *head)
{
	while(head!=NULL)
		{
			cout<<head->data<<endl;
			head=head->next;
		}
}
void deleteNode(Node** head,int num)
	{
		Node* temp=*head,*prev;
		if(temp!=NULL && temp->data==num)
		{
			*head=temp->next;
			free(temp);
			return;
		}
		//search the key to be deleted
		while(temp!=NULL && temp->data!=key)
		{
			prev=temp;
			temp=temp->next;
		}
		if(temp==NULL)
		return;
		prev->next=temp->next;//unlink
		free(temp);//free memory
	}
int main()
{
Node* head=NULL;
	int n,i,number,num;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>number;
		push(&head,number);
	}
		printList(head);
	cin>>num;
	deleteNode(&head,num);
	printList(head);
}
