#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	char name[100];
	
	printf(" enter the fomula\n");
	scanf("%s",&name);
	
	int strlength = strlen(name);
	
	for(i=0; i<strlength; i++)
	{
		printf("%c \n",name[i]);
	}
	return 0;
}
