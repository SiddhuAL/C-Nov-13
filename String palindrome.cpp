#include<stdio.h>
int palindrome(char s[],int num)
{
	for(int j=0;j<num/2;j++)
	{
		if(s[j]==s[num-j-1])
		return 1;
		else 
		return 0;
	}
}

int main()
{
	char s[100];
	printf("Welcome...\nEnter a string :");
	scanf("%s",s);
	
	int i=0;
	while(s[i]!='\0')
	i++;
	
	if(palindrome(s,i))
	printf("\nThe given string is a PALINDROME");
	else
	printf("\nThe given string is not a PALINDROME");
	return 0;
}
