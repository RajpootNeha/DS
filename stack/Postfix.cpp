#include <iostream>
#include <string.h>
#define MAX 10
using namespace std;
int top=-1;
class Postfix
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
};
int main()
{
	Postfix p;
    char x[30];
    int st[30];
    int a, b;
    cout<<"enter the balanced expression\n";
    cin>>x;
    for (int i = 0; i < strlen(x); i++)
    {
        if (x[i] >= 48 && x[i] <= 57)
            p.push(st,x[i]-'0');
        else if (x[i] >= 42 && x[i] <= 47)
        {
            a=p.pop(st);
            b=p.pop(st);
            switch(x[i])
            {
            case '+':
                p.push(st,a+b);
                break;
            case '-':
                p.push(st,b-a);
                break;
            case '*':
                p.push(st,b*a);
                break;
            case '/':      
                p.push(st,b/a);
                break;
            }
        }
    }
    cout<<"ans is "<<p.pop(st)<<endl;


}
