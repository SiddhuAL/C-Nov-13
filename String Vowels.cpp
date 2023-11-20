#include<stdio.h>
int main()
{
	char s[100];
	printf("Welcome...\nEnter a string : ");
	scanf("%s",s);
	
	char vowels[11] = {'a','e','i','o','u','A','E','I','O','U','\0'};
	
	int i=0;
	while(s[i]!='\0')
	i++;
	
	printf("The vowels in the given string : ");
	for(int j=0;j<i;j++)
	{
		for(int q=0;q<11;q++)
		{
			if(s[j]==vowels[q])
			printf(" %c",s[j]);
			else 
			continue;
		}
	}
	return 0;
}

