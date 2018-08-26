#include<iostream>
using namespace std;
#define MAX 5
int circular[MAX],front=-1,rear=-1;
class Circular
{
	public:
	
	void push()
	{
	int item;
	cin>>item;
		if(front==rear+1)
		{
		cout<<"Overflow"<<endl;
		}
		if(front==0 && rear==MAX-1)
		{
		cout<<"Overflow"<<endl;
		}
		else if(front!=0 && rear==MAX-1)
		{
		rear=0;
		circular[rear]=item;
		}
		else
		{
		rear=rear+1;
		circular[rear]=item;
		}
	}
	void pop()
	{
	if(front==-1)
	{
	cout<<"Underflow"<<endl;
	}
	if(front==rear)
	{
	rear=-1;
	front=-1;
	}
	if(front==MAX-1 && front!=rear)
	{
	front=0;
	}
	else
	{
	front==front+1;
	}
	}
	void display()
	{
	int i;
	if(rear==-1)
	{
		cout<<"Empty queue"<<endl;
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			cout<<circular[i]<<endl;
		}
	}
	}
};
int main()
{
	Circular c;
	int i;
	for(i=0;i<5;i++)
	{
	c.push();
	}
	cout<<"*******************"<<endl;
	c.display();
	/*c.pop();
	c.pop();
	cout<<"******************"<<endl;
	c.display();
	c.push();
	c.push();
	cout<<"*****************"<<endl;
	c.display();*/

}
