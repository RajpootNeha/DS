#include<iostream>
using namespace std;
#define MAX 100
char stack[MAX];
int top=-1;
class Infix
{
	public:
	void push(char x)
	{
	stack[++top]=x;
	}
	char pop()
	{
	if(top==-1)
	return -1;
	else
		return stack[top--];
	}
	int priority(char x)
	{
		if(x=='(')
		return 0;
		if(x=='+' || x=='-')
		return 1;
		if(x=='*' || x=='/')
		return 2;
		
	}
};
int main()
{
Infix i;
	char infix[100],postfix[100];
	cout<<"\nEnter any infix expression :";
	cin>>infix;
	char *ch,x;
	ch=infix;
	while(*ch!='\0')
	{
		if(isalnum(*ch))
		{
			cout<<*ch;
		}
		else if(*ch=='(')
			i.push(*ch);
		else if(*ch==')')
			{
				while((x=i.pop())!='(')
				cout<<x;
			}
			else
			{
				while(i.priority(stack[top])>=i.priority(*ch))
					cout<<i.pop();
				i.push(*ch);
				
			}
			ch++;
	}
	while(top!=-1)
	{
	cout<<i.pop();
	}
	return 0;
}
