#include <stdio.h>
#include<string.h>

void reverse(char str[])
{
	
	int i=0,j=strlen(str)-1;
      
	while(i<=j)
	{
		
		
	if(str[i]>='0'&&str[i]<='9'||(str[j]>='0'&&str[j]<='9'))
	{
		printf("true");
		i=j;
		break;
	}
	i++;
	j--;
     	}
	if(i!=j)
	printf("false");
}
int main(void) {
	
	char str[50];
    	scanf("%s",str);
	     reverse(str);

	// your code goes here
	return 0;
}
