#include<stdio.h>
#include<string.h>
#define max 100
int top=-1;
int stk[max];
void push(char);
char pop();


int main()
{
	int i;
	char formula[100],temp; //decide array for enter the fomula
	
	printf(" enter the fomula\n");
	scanf("%s",&formula);//enter fomula
	
	int strlength = strlen(formula);//decide fomula size
	
	for(i=0; i<strlength; i++)
	{
		if(formula[i]==('(' || '['||'{'))
				push(stk[max]);
			
		if(formula[i]==(')' || ']' || '}'))
			{
				temp=pop(stk[max]);
				if(temp=='(')
					{
						if(formula[i]!=')')
						{
							printf("parentheses is not balence");
							return 0;
						}
					}
				else if(temp=='[')
					{
						if(formula[i]!=']')
						{
						printf("parentheses is not balence");
							return 0;
						}
					}
				else if(temp=='{')
					{
						if(formula[i]!='}')
						{
							printf("parentheses is not balence");
							return 0;
						}
					}
			}
	}
	printf("parentheses is balence");
	return 0;
}
void push(char c)
{
	if(top == (max-1))
		{
			printf("stack overflow\n");
		}
	else
	{
		top =top +1;
		stk[top] = c;
	}
}
char pop()
{
	if (top == -1)
		{
			printf("\n stack underflow");
			return 0;
		}
	else 
		return(stk[top--]);
}
