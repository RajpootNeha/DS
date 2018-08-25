#include<iostream>
using namespace std;
#define MAX 10
int st[MAX],top=-1;
//push function
class Stack1
{
public:
	
void push(int st[],int val)
{
	if(top==MAX-1)
	{
	cout<<"\nSTACK OVERFLOW";
	}
	else
	{
	top++;
	st[top]=val;
	}
}
//pop function
int pop(int st[])
{
int val;
	if(top==-1)
	{
	cout<<"\n STACK UNDERFLOW";
	return -1;
	}	
	else
	{
	val=st[top];
	top--;
	return val;
	}
}

//peep function

int peep(int st[])
{
	if(top==-1)
	{
	cout<<"\nSTACK IS EMPTY";
	return -1;
	}
	else
	{
	return (st[top]);
	}
}

//display function
void display(int st[])
{
	int i;
	if(top==-1)
	{
	cout<<"\n STACK IS EMPTY";
	}
	else
	{
	for(i=top;i>=0;i--)
	{
	cout<<endl<<st[i];
	}
	}
}



};



int main()
{
class Stack1 s;
	int val,option;
	do
	{
		cout<<"\n****************";
		cout<<"\n 1. PUSH";
		cout<<"\n 2. POP";
		cout<<"\n 3. PEEP";
		cout<<"\n 4.DISPLAY";
		cout<<"\n 5.EXIT";
		cout<<"\n***************************";
		cout<<"\nEnter Option";
		cin>>option;
		
		switch(option)
		{
		
		case 1:
				cout<<"\n Enter number to be pushed on the stack: ";
				cin>>val;
				s.push(st,val);
				break;
		case 2:
				val=s.pop(st);
				if(val!=-1)
				{
				cout<<"\n The value deleted from the stack is : "<<val;
				
				}
				break;
				
		case 3:
				val=s.peep(st);
				if(val!=-1)
				cout<<"\nThe value stored at the top of stack is : "<<val;
				break;
		case 4:
			s.display(st);
			break;
				
		}
	}while(option!=5);
	return 0;
	
}
