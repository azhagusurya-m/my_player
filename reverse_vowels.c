#include <stdio.h>
#include<string.h>
void swap(char *c,char *d)
{
	char temp=*c;
	*c=*d;
	*d=temp;
}
void reverse(char str[])
{
	
	int i=0,j=strlen(str)-1;
      int n=j+1;
	while(i<=j)
	{
		
		
		swap(&str[i],&str[j]);
		i++;
		j--;
		
	}
	str[n]='\0';
	
	printf("output1:%s\noutput2:",str);
	i=0;
	
	while(str[i]!='\0')
	{
		switch(str[i])
		{
			
			case 'a':
			case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'O':
            case 'o':
            case 'u':
            case 'U':
			break;
			default:
			   printf("%c",str[i]);
			
			}
		i++;
	}
}
int main(void) {
	
	char str[50];
    	scanf("%s",str);
	     reverse(str);

	// your code goes here
	return 0;
}
