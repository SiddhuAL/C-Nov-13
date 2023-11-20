#include<stdio.h>
float array_avg(int a[],int n)
{
	float avg = 0;
	for(int i=0;i<n;i++)
	avg += a[i];
	avg /= n;
	return avg;
}

int main()
{
	int a[4]={1,2,3,7};
	int size = 4;
	printf("\n %.2f",array_avg(a,size));
	return 0;
}



