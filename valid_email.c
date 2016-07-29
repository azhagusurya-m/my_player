#include <stdio.h>
#include<string.h>

void valid_email(char str[])
{
	
	int i=0,j=strlen(str)-1;

    if(str[j--]=='m'&&str[j--]=='o'&&str[j--]=='c'&&str[j--]=='.')
    {

    while(str[j]!='@')
	{
		i++;
		j--;
	}
	
	if(i==4||i==5 &&(j)>=3)
		printf("valid");
	else 
	printf("invalid");

    }
	else 
	printf("invalid");

     	
     
	
}
	int main(void) {
	
	char str[50];
    	scanf("%s",str);
	  valid_email(str);

	// your code goes here
	return 0;
}
