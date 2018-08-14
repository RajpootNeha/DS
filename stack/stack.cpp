#include<iostream>
using namespace std;
 
#define MAX 1000
 
class Stack
{
    int top;
    int top1;
public:
    int a[MAX]; 
 
    Stack() 
     { top = -1; }
    int push(int x);
    int pop();
    int peek();
    int print();

};
 
int Stack::push(int x)
{
    if (top >= (MAX-1))
    {
        cout << "Stack Overflow";
       // return false;
    }
    else
    {
        a[++top] = x;
       // return true;
    }
    return top;
}
 
int Stack::pop()
{
    if (top ==-1)
    {
        cout << "Stack Underflow";
        return 0;
    }
    else
    {
        int x = a[top--];
        return x;
    }
}

int Stack::peek()
{
cout<<a[top];
}
int Stack::print()
{
	for(int i=0;i<top;i++)
	{
	cout<<a[i]<<endl;
	}
}
 

int main()
{
     Stack s;
     int n,num,i;
     cin>>n;
     for(i=0;i<n;i++)
     {
     cin>>num;
     s.push(num);
 	}
 	cout<<"Elements in the stack are :"<<endl;
 	s.print();
 
    cout<<endl << s.pop() << " Popped from stack\n";
	cout<<"Last element of stack is  ";
 	s.peek();
 	cout<<"\nAfter deleting last 2 element of stack "<<endl;
 	s.print();
    return 0;
}
