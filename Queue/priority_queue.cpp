#include<iostream>
using namespace std;
struct node
{
	int data;
	int pri;
	node *next;
};
void insert_node(node** head,int number,int pri)
{
	node *start=new node();
	start->data=number;
	start->next=NULL;
	start->pri=pri;
	
	if((*head)==NULL || (*head)->pri > pri)
	{
		start->next=(*head);
		(*head)=start;
	}
	else
	{
		node *p;
		p=(*head);
		
		while(p->next!=NULL && p->pri<pri)
		{
			p=p->next;
		}
		//p->next=ptr;
		start->next=p->next;
		p->next=start;
		
	}
}

void printList(node *head)
{
	while(head!=NULL)
	{
	cout<<head->data<<endl;
	head=head->next;
	}
}



int main()
{
	node *head=NULL;
insert_node(&head,5,2);
insert_node(&head,7,1);
insert_node(&head,8,3);
printList(head);
}
