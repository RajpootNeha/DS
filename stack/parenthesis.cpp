#include <bits/stdc++.h>
using namespace std;
int Stack[1000];
char input[1000];
int top,i;
void push(int x)
{
	Stack[++top]=x;
}
bool isEmpty()
{
	if(top>0)
	return false;
	else
	return true;
}
bool check(char input[])
	{
	top=0;
	int n=strlen(input);
	for(i=0;i<n;++i)
	{
		if(input[i]=='(')
		{
			push(1);}
		if(input[i]=='[')
		{
			push(2);
			}
		if(input[i]=='{')
		{
			push(3);
			}
			
	 if (input[i] == ')') {
			 if (isEmpty() || Stack[top] != 1) 
			 return false;
            else {
                Stack[top]=0;
                top--;
            }
            }
            			
    	 if (input[i] == ']') {
			 if (isEmpty() || Stack[top] != 2) 
			 return false;
            else {
                Stack[top]=0;
                top--;
            }
            }
            			
        if (input[i] == '}') {
			 if (isEmpty() || Stack[top] != 3) 
			 return false;
            else {
                Stack[top]=0;
                top--;
            }
            }
            		
            			}
            			
           if(top == 0)
           {
           return true;
           }
           else
           {
           return false;
           }
          
            			
			

	
	}
int main()
{

	cin>>input;

	check(input) ? cout<<"Brackets are correct ":cout<<"Not correct"<<endl;
	return 0;
	
}
