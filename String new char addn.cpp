#include<stdio.h>
int len(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}

int main()
{
	char s[100];
	printf("Welcome...\nEnter a string :");
	scanf("%s",s);
	
	char n[2];
	printf("\nEnter the new character :");
	scanf(" %c",n);
	
	int i;
	printf("\nEnter at what position :");
	scanf("%d",&i);
	
	for(int j=i-1;j<len(s);j++)
	s[j+1]=s[j];
	
	s[i-1]=n[0];
	
	printf("\nThe new string is %s",s);
	return 0;
}
