#include<stdio.h>
int S(int n)
{
	if(n==1)
	return 1;
	else if(n==2)
	return 2;
	else if(n==3)
	return 3;
	else
	return S(n-1)+S(n-2)+S(n-3);
}

int main()
{
	int n;
	printf("Enter which term you wanna see : ");
	scanf("%d",&n);
	printf("%d",S(n));
	return 0;
}
