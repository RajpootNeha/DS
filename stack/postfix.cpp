#include <iostream>
#include <cmath>
using namespace std;
const int MAX = 50 ;
class postfix
{
	private :
 
		int stack[MAX] ;
		int top, nn ,data;
		char *s ;
	public :
		postfix( ) ;
		void input ( char *str ) ;
		void push ( int item ) ;
		int pop( ) ;
		void calculate( ) ;
		void show( ) ;
} ;
postfix :: postfix( )
{
	top = -1 ;
}
void postfix :: input ( char *str )
{
	s = str ;
}
void postfix :: push ( int item )
{
	if ( top == MAX - 1 )
		cout << endl << "Stack is full" ;
	else
	{
		top++ ;
		stack[top] = item ;
	}
}
int postfix :: pop( )
{
	if ( top == -1 )
	{
		cout << endl << "Stack is empty" ;
		//return ;
	}
	else
	
	data = stack[top] ;
	top-- ;
	return data ;
}
void postfix :: calculate( )
{
	int n1, n2, n3 ;
	while ( *s )
	{
		if ( *s == ' ' || *s == '\t' )
		{
			s++ ;
			continue ;
		}
		if ( isdigit ( *s ) )
		{
			nn = *s - '0' ;
			push ( nn ) ;
		}
		else
		{
			n1 = pop( ) ;
			n2 = pop( ) ;
			switch ( *s )
			{
				case '+' :
					n3 = n2 + n1 ;
					break ;
				case '-' :
					n3 = n2 - n1 ;
					break ;
				case '/' :
					n3 = n2 / n1 ;
					break ;
				case '*' :
					n3 = n2 * n1 ;
					break ;
				case '%' :
					n3 = n2 % n1 ;
					break ;
				case '$' :
					n3 = pow ( n2 , n1 ) ;
					break ;
				default :
					cout << "Unknown operator" ;
					exit ( 1 ) ;
			}
 
			push ( n3 ) ;
		}
		s++ ;
	}
}
void postfix :: show( )
{
	nn = pop ( ) ;
	cout << "Result is: " << nn ;
}
 
int main( )
{
	char input[MAX] ;
	cout << "\nEnter postfix expression to be evaluated : " ;
	cin.getline ( input, MAX ) ;
	postfix q ;
	q.setexpr ( input) ;
	q.calculate( ) ;
	q.show( ) ;
	return 0;
}
