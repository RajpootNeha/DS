#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
};
void insertAtBegin(Node** head,int number)
{
	Node* temp=new Node();
	temp->data=number;
	temp->next=*head;
	*head=temp;
}
void InsertAfter(Node* prev_node,int data)
{
	if(prev_node==NULL)
	{
	cout<<"previous node cannot be null"<<endl;
	return;
	}
	Node *temp=new Node();
	temp->data=data;
	temp->next=prev_node->next;
	prev_node->next=temp;
	
}
void printList(Node *head)
{
	while(head!=NULL)
	{
	cout<<head->data<<endl;
	head=head->next;
	}
}
void InsertAtEnd(Node** head,int number)
{
Node *temp=new Node();
  Node *last = *head; 
   temp->data  = number;
    temp->next = NULL;
    if (*head == NULL)
    {
       *head = temp;
       return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = temp;
    return;
	
}
int main()
{
int n,i,data,number,n2;
Node *head=NULL;
Node *prev_node;
cin>>n;
for(i=0;i<n;i++)
{
	cin>>number;
	insertAtBegin(&head,number);
}
cout<<"*******************"<<endl;
cout<<"Created Link List"<<endl;
printList(head);
cout<<"Enter number to insert after a given node "<<endl;
cin>>data;
InsertAfter(head->next,data);
cout<<"********************"<<endl;
cout<<"After adding new node Link List is "<<endl;
printList(head);
cout<<"Enter number to insert at end of node "<<endl;
cin>>n2;
InsertAtEnd(&head,n2);
cout<<"After insertion at end of the linklist"<<endl;
printList(head);
}
