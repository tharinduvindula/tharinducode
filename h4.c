#include<stdio.h>
#include<string.h>
#define max 100
int top=-1;
int stk[max];
void push(char);
char pop();

int main()
{
	int i,flag=1;
	char formula[100],temp; //decide array for enter the fomula
	
	printf(" enter the fomula\n");
	scanf("%s",&formula);//enter fomula
	
	
	int strlength = strlen(formula);//decide fomula size
	
	for(i=0; i<strlen(formula); i++)
	{
		
		if(formula[i]=='(' || formula[i]=='['|| formula[i]=='{')
				
				push(formula[i]);
				
	
		if(formula[i]==(')' || formula[i]==']' || formula[i]=='}'))
			{
				temp=pop(stk[max]);
				
				if(temp=='(')
					{
						if(formula[i]!=')')
						{
							flag=0;
						}
					}
				else if(temp=='[')
					{
						if(formula[i]!=']')
						{
							flag=0;
						}
					}
				else if(temp=='{')
					{
						if(formula[i]!='}')
						{
							flag=0;
						}
					}
			}
	}
	if(top>=1)
		flag=0;
	if(flag==1)
	printf("parentheses is balence");
	else
	printf("parentheses is not balence");
	return 0;
}
//hi iiiiiiiiiii
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
		}
	else 
		return(stk[top--]);
}
