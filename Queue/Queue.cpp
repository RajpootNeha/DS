#include<iostream>
using namespace std;
#define MAXSIZE 5
//big O 
/*Array based implementation

front=-1,rear=-1
*/
int queue[MAXSIZE],front=-1,rear=-1;
class Queue
{
	public:
	bool isempty() {
   if(front < 0 || front > rear) 
      return true;
   else
      return false;
				}

bool isfull() {
   if(rear == MAXSIZE - 1)
      return true;
   else
      return false;
			}

int peek() {
   return queue[front];
			}
	
	//enqueue is just like push function to insert an element
void enqueue()
{
	int item;
	cout<<"Enter the element"<<endl;
	cin>>item;
	if(rear==MAXSIZE-1)
	{
		cout<<"Overflow"<<endl;
		return;
	}
	if(front==-1 && rear==-1)
	{
	front=0;
	rear=0;
	}
	else
	{
	rear=rear+1;
	}
	queue[rear]=item;
	cout<<"value inserted"<<endl;
}
	//delete an element 
void dequeue()
{
	int item;
	if(front==-1 || front>rear)
	{
		cout<<"Underflow"<<endl;
		return;
	}
	else
	{
	item=queue[front];
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
	{
		front=front+1;
	}
	cout<<"value deleted"<<endl;
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
			cout<<queue[i]<<endl;
		}
	}
}
		
};
int main()
{
	Queue q;
	int n,num;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	//cin>>num;
		q.enqueue();
	}
	cout<<"************************"<<endl;
	q.display();
	q.dequeue();
	cout<<"**********************"<<endl;
	q.display();

	
	
}
