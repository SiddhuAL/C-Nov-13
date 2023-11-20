#include<stdio.h>
int main()
{
	char str[6]= "Hello";
	char *ptr[]= {&str[0],&str[1],&str[2],&str[3],&str[4],&str[5]};
	int n = (sizeof(str)/sizeof(str[0]))-1;
	for(int i=0;i<n/2;i++)
	{
		char t=str[n-i-1];
		str[n-i-1]=str[i];
		str[i]=t;
	}
	
	for(int i=0;i<n;i++)
	printf("%c",str[i]);
	
	return 0;
}
